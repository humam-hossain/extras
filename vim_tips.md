# Vim tips & tricks

## quit & save file
1. esc to exit insert mode
3. ZZ (press shift + z two times)

## Open multiple files as tabs
```bash
vi -p file1 file2
```

## Search
1. ```/<keyword>``` for forward search
3. ```?<keyword>``` for backward search

## execute a shell command while your are in VIM session
1. file should be open with vim
2. ":!" + shell command

___to insert the result of the shell command___
* ":r!" + shell command

