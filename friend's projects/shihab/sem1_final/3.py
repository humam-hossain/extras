# ## Question-3:
# Write a python function that takes a number(integer) as an argument and 
# generates a pattern according to the outputs shown below.
# ================================================
# Function call 1:
# function_name(4)
# Sample Output 1:
# AAAA
# #A**A
# ##A**A
# ###AAAA
# ================================================
# Function call2:
# function_name(3)
# Sample Output 2:
# AAA
# #A*A
# ##AAA
# ================================================
# Function call2:
# function_name(5)
# Sample Output 2:
# AAAAA
# #A***A
# ##A***A
# ###A***A
# ####AAAAA

def function_name(num):
    for i in range(num, 2*num):
        if i == num:
            for j in range(0, i):
                    print("A", end="")
        else:
            for j in range(0, i-num):
                print("#",end="")
            print("A",end="")
            for j in range(0, num - 2):
                if i == (2*num - 1):
                    print("A", end="")
                else:
                    print("*",end="")
            print("A",end="")
        print()

function_name(4)
print()
function_name(3)
print()
function_name(5)