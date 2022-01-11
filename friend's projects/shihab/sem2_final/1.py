# Question: 1
# A number is called a magic number if the first digit equals the summation 
# of the rest of the digits. Your task is to write a Python code that takes 
# some numbers as user input (separated by a comma) in a single line and 
# groups the magic & normal numbers in a dictionary. Note that the values 
# corresponding to the keys in that dictionary must be in tuple format.

# Sample Input 1:
# 9432, 346, 4538, 83221, 7999888
# Sample Output 1:
# {'Magic': (9432, 83221), 'Normal': (346, 4538, 7999888)}
# -----------------------------------------------------------------
# Sample Input 2:
# 1431, 69716, 353, 7969828
# Sample Output 2:
# {'Magic': (), 'Normal': (1431, 69716, 353, 7969828)}

def mySum(nums):
    total = 0
    for num in nums:
        total += num
    return total

def properDivisors(num):
    divisors = []
    for i in range(1, num):
        if num % i == 0:
            divisors.append(i)
    return divisors

perfect_numbers = []
imperfect_numbers = []

while True:
    user_input = input('Enter a number or \'stop\' to exit: ')
    
    if user_input.casefold() == 'stop':
        break
    
    if mySum(properDivisors(int(user_input))) == int(user_input):
        perfect_numbers.append(int(user_input))
    else:
        imperfect_numbers.append(int(user_input))
    
    # Print after appending
    print({'Perfect': perfect_numbers, 'Imperfect': imperfect_numbers})
    print('===***===')