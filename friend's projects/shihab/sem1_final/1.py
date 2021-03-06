# Question-1:
# Write a Python program that takes an integer Y from 10 to 20 inclusive as 
# an input from the user and prints “The user entered Y”. Then the program 
# should print a series of numbers, starting at Y as the first term of the 
# series and then the following terms will be according to the formula Y = (2 
# x Y) - 5 until Y is less than 100. If the user enters an integer that is 
# beyond the range mentioned above, your program should print “Wrong input”.

# ====================================================
# Sample Input 1:
# 10
# Sample Output 1:
# The user entered 10
# 10, 15, 25, 45, 85

# Explanation 1:
# The user gave 10 as input so “The user entered 10” is printed. Then the 
# series starts from 10 and the next number is 2*10 - 5 = 15, the next one 
# 2*15 - 5 = 25 and so on up to 85 because the next number in sequence 2*85 - 
# 5 = 165 is greater than 100.
# ====================================================
# Sample Input 2:
# 30
# Sample Output 2:
# The user entered 30
# Wrong input

# Explanation 2: The user gave 30 as input so “The user entered 30” is 
# printed at first. However, since 30 is beyond the range of 10 to 20 
# inclusive, this time our program prints “wrong input” instead of a sequence.
# ====================================================
# Sample Input 3:
# 14
# Sample Output 3:
# The user entered 14
# 14, 23, 41, 77.

# Explanation 3:
# The user gave 14 as input this time so “The user entered 14” is printed. 
# Then the series starts from 14 and the next number is 2*14 - 5 = 23, the 
# next one 2*23 - 5 = 41 and so on up to 77 because the next number in 
# sequence 2*77 - 5 = 149 is greater than 100.
# ====================================================

Y = int(input())
print("The user entered", Y)

if Y >= 10 and Y <= 20:
    while Y < 100:
        print(f'{Y}', end="")
        Y = (2 * Y) - 5
        if Y < 100:
            print(", ", end="")
else:
    print("Wrong input")
