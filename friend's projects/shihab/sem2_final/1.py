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