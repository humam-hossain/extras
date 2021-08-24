# extras
---

## Kali Linux hacks
### installation of .deb packages

**using dpkg** -
```bash
  sudo dpkg -i /path/to/deb/file #installing
  sudo apt-get install -f #creating dependecies
```

### Uninstallation of .deb packages
```bash
dpkg -r packagename.deb #uninstalling
```
### Fixing broken installation
```bash
apt --fix-broken install
```
## How to build & run a C/C++ program

1. go to the file.c directory
2. open terminal
3. run commands below:
```bash 
gcc file.c && ./a.out #to run
```
or,
```bash
gcc file file.c && ./file #to run
```
### How to auto root in kali 2021
___Method 1___
1. run this command
```bash
dpkg-reconfigure kali-grant-root
```
2. Enable password-less privilege escalation.
3. open the file below.
```bash
nano /home/painkiller/.bashrc
```
4. now add this command in the last line
```bash
sudo su
```

___Method 2___
1. open the configuration file below
```bash
nano /etc/lightdm/lightdm.conf
```
2. change two lines of code in [Seat:*] section
```bash
autologin-user=root
autologin-user-timeout=0
```
3. edit the file below
```bash
nano /etc/pam.d/lightdm-autologin
```
4. comment this code below
```bash
#auth    required pam_succeed_if.so user != root quiet-success
```
## How to download facebook video
> Doesn't work anymore
1. Switch account to facebook classic
2. copy the url of the video clicking right mouse
3. open new tab, paste the url & replace www with mbasic(mobile version)
4. right click on top of the video and select "open in new tab" from menu
5. download the video

## Tools

### online ide

* rextester.com
* repl.it

### extensions

* brackets - emmet(for html,css)
* google chrome extension - postman
* vidual studio code - material icon theme

## Activate Bangla font in Kali

**Tutorial**: https://www.youtube.com/watch?v=kfwPDzZFvcU
**Bangla Fonts** : https://www.omicronlab.com/bangla-fonts.html


