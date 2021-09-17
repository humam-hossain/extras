# ## Question-2:
# Assume, you are given two dictionaries. The dictionary named 
# current_sem_data contains the GPA of 3 students of their current semester 
# courses. The dictionary named previous_sem_data contains their previous 
# semesters’ CGPA and credits completed respectively. Assume that all courses 
# are of 3 credits each.

# current_sem_data = 
# {"John":[4.0,3.7,4.0], "Tom":[3.3,3.7,4.0], "Harry":[3.3,3.7,4.0]}
# previous_sem_data = {"John":[3.88,90], "Tom":[3.52, 70], "Harry":[3.25,85]}

# Now, write a Python program that will take a student’s name as user input 
# and calculate and print that student’s current CGPA using both the given 
# dictionaries.
# FORMULA for calculating CGPA:
# current_total_GPA= ∑ (current course grade X credit)
# previous_total_GPA= Previous CGPA* total credits previously
# C.G.P.A = (current_total_GPA + previous_total_GPA)/(Total Credits completed 
# till current semester)
# =======================================================
# Sample Input 1:
# John

# Sample Output 1:
# *****Data for John*****
# Previous semester's completed credits: 90
# Previous semester's CGPA: 3.88
# Total Credits completed including current semester: 99
# Current semester's total GPA: 35.1
# Current semester's CGPA: 3.881818181818182

# Explanation 1:
# First, calculate the total GPA for the current semester (4.0 X 3) + (3.7 X 
# 3) + (4.0 X 3) = 35.1. Total Credits completed including current semester = 
# 90 + (3*3) = 99.
# Therefore, CGPA= (35.1 + 3.88 X 90 ) / 99 = 3.881818181818182
# =======================================================
# Sample Input 2:
# Harry

# Sample Output 2:
# *****Data for Harry*****
# Previous semester's completed credits: 85
# Previous semester's CGPA: 3.25
# Total Credits completed including current semester: 94
# Current semester's total GPA: 33.0
# Current semester's CGPA: 3.2898936170212765

# Explanation 2:
# First, calculate the total GPA for the current semester (3.3 X 3) + (3.7 X 
# 3) + (4.0 X 3) = 33.0. Total Credits completed including current semester = 
# 85 + (3*3) = 94.
# Therefore, CGPA = (33.0 + 3.25 X 85) / 94 = 3.2898936170212765
#   =======================================================


current_sem_data = {"John":[4.0,3.7,4.0], "Tom":[3.3,3.7,4.0], "Harry":[3.3,3.7,4.0]}
previous_sem_data = {"John":[3.88,90], "Tom":[3.52, 70], "Harry":[3.25,85]}

name = input()

print(f"Previous semester's completed credits: {previous_sem_data[name][1]}")
print(f"Previous semester's CGPA: {previous_sem_data[name][0]}")

total_credits_completed = previous_sem_data[name][1] + len(current_sem_data[name]) * 3
print(f"Total Credits completed including current semester: {total_credits_completed}")

current_total_gpa = 0

for i in range(0, len(current_sem_data[name])):
    current_total_gpa = current_total_gpa + current_sem_data[name][i] * 3

print(f"Current semester's total GPA: {current_total_gpa}")

cgpa = (current_total_gpa + previous_sem_data[name][0] * previous_sem_data[name][1])/total_credits_completed
print(f"Current semester's CGPA: {cgpa}")