while read line
do
	git clone ${line}
	echo
	echo
done < github_repo.list
