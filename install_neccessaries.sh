ls install > install/in.list

while read line
do
	echo "${line}"
	./install/${line}
	echo
done < install/in.list
