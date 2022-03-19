touch git_dir
ls -d */ > git_dir

while read line
do
	echo "$line"
	cd ${line}
	./git_push_all.sh
	cd ..
done < git_dir
