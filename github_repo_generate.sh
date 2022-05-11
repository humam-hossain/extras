while read line
do
	git clone ${line}
done < github_repo.list
