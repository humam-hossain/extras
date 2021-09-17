# Question-3:
# Write a python function that takes a string as an argument and returns a 
# new string by replacing all occurrences of repetitive characters with "#".
# [You are NOT allowed to use count(), sort(), sorted()]
# ================================================
# Function call1:
# function_name("blueberry")
# Sample Output 1:
# #lu#####y
# Explanation 1:
# The argument string had more than one occurrence of “b”, “e” and “r”. Thus 
# they are replaced with "#".
# ================================================
# Function call2:
# function_name("prominent")
# Sample Output 2:
# promi#e#t
# Explanation 2:
# The argument string had more than one occurrence of “n”. Thus they are 
# replaced with "#".

def function_name(string):
    str_list = list(string)

    repeated_characters = list()

    for i in range(0, len(string)):
        count = 0
        for j in range(0, len(string)):
            if str_list[i] == str_list[j]:
                count = count + 1

        if count > 1:
            repeated_characters.append(str_list[i])

    for i in range(0, len(repeated_characters)):
        for j in range(0, len(str_list)):
            if str_list[j] == repeated_characters[i]:
                str_list[j] = "#"
        
    string = ''.join(str_list)
    print(string)

function_name("blueberry")
function_name("prominent")
