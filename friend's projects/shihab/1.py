# Write a python function that takes 3 arguments.
# A string that contains a single sentence or multiple sentences separated by 
# full stops.
# A list containing 2 numbers.
# A list containing 3 special characters.

# Your function should replace the characters of the sentence if the ASCII 
# value of each is divisible by any of the numbers provided in the list 
# containing 2 numbers. The characters should be replaced according to the 
# following 4 rules and finally, print the updated sentences INSIDE the 
# function.
# If the ASCII of the character is divisible by BOTH the numbers, replace the 
# character with the LAST item of the special character list.
# If the ASCII of the character is divisible by ONLY the FIRST number of the 
# list, replace the character with the FIRST item of the special character 
# list.
# If the ASCII of the character is divisible by only the SECOND number of the 
# list, replace the character with theSECOND item of the special character 
# list.
# If not divisible by the given numbers, no need to replace.

# ================================================
# Function Call 1:
# function_name('Python is easy', [3, 5], ['@', '*', '+'])
# Sample Output1:
# *yth@* +* ea*y
# Explanation1:
# The ASCII value of ‘i’ is 105. It is divisible by both 3 and 5,  so it is 
# replaced by ‘+’. The ASCII value of ‘i’ is 111. It is divisible by only 3, 
# so it is replaced by ‘@’. The ASCII value of ‘P’, ‘i’, ‘s’ is divisible by 
# only 5, so it is replaced by ‘*’.

# ================================================
# Function Call2:
# function_name("Programming is fun. Let’s code.", [6, 8], ['$', '#', '@'])
# Sample Output2:
# #$og$amming#is#$un.#Let’s#code.
# Explanation2:
# The ASCII value of ‘r’ and ‘f’ is divisible by only 6,  so it is replaced 
# by ‘$’.
# The ASCII value of ‘P’ and ‘ ’(space) is divisible by only 8,  so it is 
# replaced by ‘#’

def function_name(string, num_list, char_list):
    string = list(string)

    for char in string:
        if ord(char) % num_list[0] == 0 and ord(char) % num_list[1] == 0 and char != '.':
            print(char_list[2], end="")
        elif ord(char) % num_list[0] == 0 and char != '.':
            print(char_list[0], end="")
        elif ord(char) % num_list[1] == 0 and char != ".":
            print(char_list[1], end="")
        else:
            print(char, end="")

function_name("Programming is fun. Let's code.", [6,8], ['$', '#', '@'])
print()
function_name('Python is easy', [3, 5], ['@', '*', '+'])
