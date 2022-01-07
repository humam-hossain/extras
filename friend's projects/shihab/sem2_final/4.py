# Question: 1
# A perfect number is an integer that is the sum of its positive proper 
# divisors (all divisors except itself). For example, 6 is a perfect number. 
# The divisors of 6 except itself are 1,2 and 3. The sum of the proper 
# divisors of 6 is 6. Thus 6 is a perfect number. You have to take integers 
# as input and continue taking input until the word “STOP” is given as input. 
# After taking the inputs you have to classify the integers as Perfect and 
# Imperfect and store it in a dictionary(Please see the output for better 
# understanding).
# [Note: You CANNOT use any built in functions EXCEPT input(),range(),print()]

# Sample Input :
# 6
# 10
# 8
# 25
# 28
# 100
# 496
# 530
# STOP

# Sample Output:(No need to follow the output format. Just print the 
# resultant dictionary.)
# {
# Perfect: [6,28,496],
# Imperfect: [10,8,25,100,530]
# }

dict = {"Perfect": [], "Imperfect": []}
num = []

while 1:
    s = input()

    if s == "STOP":
        break

    num.append(int(s))

for number in num:
    divisors = []
    sum = 0

    for i in range(1, number):
        if number % i == 0:
            divisors.append(i)

    for i in divisors:
        sum += i

    if sum == number:
        dict["Perfect"].append(number)
    else:
        dict["Imperfect"].append(number)

print(dict)
