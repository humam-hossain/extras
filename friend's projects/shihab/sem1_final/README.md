## Question-1:
Write a Python program that takes an integer Y from 10 to 20 inclusive as 
an input from the user and prints “The user entered Y”. Then the program 
should print a series of numbers, starting at Y as the first term of the 
series and then the following terms will be according to the formula Y = (2 
x Y) - 5 until Y is less than 100. If the user enters an integer that is 
beyond the range mentioned above, your program should print “Wrong input”.

====================================================
Sample Input 1:
10
Sample Output 1:
The user entered 10
10, 15, 25, 45, 85

Explanation 1:
The user gave 10 as input so “The user entered 10” is printed. Then the 
series starts from 10 and the next number is 2*10 - 5 = 15, the next one 
2*15 - 5 = 25 and so on up to 85 because the next number in sequence 2*85 - 
5 = 165 is greater than 100.
====================================================
Sample Input 2:
30
Sample Output 2:
The user entered 30
Wrong input

Explanation 2: The user gave 30 as input so “The user entered 30” is 
printed at first. However, since 30 is beyond the range of 10 to 20 
inclusive, this time our program prints “wrong input” instead of a sequence.
====================================================
Sample Input 3:
14
Sample Output 3:
The user entered 14
14, 23, 41, 77.

Explanation 3:
The user gave 14 as input this time so “The user entered 14” is printed. 
Then the series starts from 14 and the next number is 2*14 - 5 = 23, the 
next one 2*23 - 5 = 41 and so on up to 77 because the next number in 
sequence 2*77 - 5 = 149 is greater than 100.
====================================================

## Question-2:
Assume, you are given two dictionaries. The dictionary named 
current_sem_data contains the GPA of 3 students of their current semester 
courses. The dictionary named previous_sem_data contains their previous 
semesters’ CGPA and credits completed respectively. Assume that all courses 
are of 3 credits each.

current_sem_data = 
{"John":[4.0,3.7,4.0], "Tom":[3.3,3.7,4.0], "Harry":[3.3,3.7,4.0]}
previous_sem_data = {"John":[3.88,90], "Tom":[3.52, 70], "Harry":[3.25,85]}

Now, write a Python program that will take a student’s name as user input 
and calculate and print that student’s current CGPA using both the given 
dictionaries.
FORMULA for calculating CGPA:
current_total_GPA= ∑ (current course grade X credit)
previous_total_GPA= Previous CGPA* total credits previously
C.G.P.A = (current_total_GPA + previous_total_GPA)/(Total Credits completed 
till current semester)
=======================================================
Sample Input 1:
John

Sample Output 1:
*****Data for John*****
Previous semester's completed credits: 90
Previous semester's CGPA: 3.88
Total Credits completed including current semester: 99
Current semester's total GPA: 35.1
Current semester's CGPA: 3.881818181818182

Explanation 1:
First, calculate the total GPA for the current semester (4.0 X 3) + (3.7 X 
3) + (4.0 X 3) = 35.1. Total Credits completed including current semester = 
90 + (3*3) = 99.
Therefore, CGPA= (35.1 + 3.88 X 90 ) / 99 = 3.881818181818182
=======================================================
Sample Input 2:
Harry

Sample Output 2:
*****Data for Harry*****
Previous semester's completed credits: 85
Previous semester's CGPA: 3.25
Total Credits completed including current semester: 94
Current semester's total GPA: 33.0
Current semester's CGPA: 3.2898936170212765

Explanation 2:
First, calculate the total GPA for the current semester (3.3 X 3) + (3.7 X 
3) + (4.0 X 3) = 33.0. Total Credits completed including current semester = 
85 + (3*3) = 94.
Therefore, CGPA = (33.0 + 3.25 X 85) / 94 = 3.2898936170212765
  =======================================================

## Question-3:
Write a python function that takes a number(integer) as an argument and 
generates a pattern according to the outputs shown below.
================================================
Function call 1:
function_name(4)
Sample Output 1:
AAAA
#A**A
##A**A
###AAAA
================================================
Function call2:
function_name(3)
Sample Output 2:
AAA
#A*A
##AAA
================================================
Function call2:
function_name(5)
Sample Output 2:
AAAAA
#A***A
##A***A
###A***A
####AAAAA