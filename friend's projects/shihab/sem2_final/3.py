# Question: 3
# Design CSEDepartment and EEEDepartment class which inherit the Department 
# class so that the following code provides the expected output.
#        [Student ID = 2 digits of admission year+ (semester_ID) + 
# (deparment_code) + students created so far]
#         [ For Spring, semester_ID =1, for Summer, semester_ID = 3, for Fall, 
# semester_ID = 2 ]

class Department:
    studentCount = 0
    cse_studentcount = 0
    eee_studentcount = 0

    def __init__(self,name, code, credits):
        self.name = name
        self.code = code
        self.credits = credits

    def __str__(self):
        return "Department Name: " + self.name

class CSEDepartment(Department):
    cse_student = {}
    def __init__(self, name, code, credits):
        super().__init__(name, code, credits)
        print("CSE department’s code value is 01")

    def __str__(self):
        return "Department Name: " + self.name
        
    def addStudentWithSemester(self, *args):
        lists = list(args)
        
        for i in range(0, len(lists), 2):
            semester, year = lists[i+1].split('-')
            code = year.split()

            if semester == "Spring":
                code.append('1')
            elif semester == "Summer":
                code.append('3')
            elif semester == "Fall":
                code.append('2')

            code.append(self.code)
            if Department.cse_studentcount < 10:
                code.append('0')    
            code.append(str(Department.cse_studentcount))

            code = ''.join(code)

            CSEDepartment.cse_student[lists[i]] = code
            Department.cse_studentcount += 1
            Department.studentCount += 1
        
        print("Student ID generated and all students added")
            

class EEEDepartment(Department):
    eee_student= {}
    
    def __init__(self, name, code, credits):
        super().__init__(name, code, credits)
        print("EEE department’s code value is 21")


    def addStudentWithSemester(self, *args):
        lists = list(args)
        
        for i in range(0, len(lists), 2):
            semester, year = lists[i+1].split('-')
            code = year.split()

            if semester == "Spring":
                code.append('1')
            elif semester == "Summer":
                code.append('3')
            elif semester == "Fall":
                code.append('2')

            code.append(self.code)
            if Department.eee_studentcount < 10:
                code.append('0')    
            code.append(str(Department.eee_studentcount))

            code = ''.join(code)

            EEEDepartment.eee_student[lists[i]] = code
            Department.eee_studentcount += 1
            Department.studentCount += 1


#Write your code here
c1 = CSEDepartment("CSE", "01", 136)
print("1=================================")
c1.addStudentWithSemester("Bob", "Spring-20", "Mike", "Fall-20", "Carol", "Summer-21")
print("2=================================")
print(c1)
print("3#################################")
e1 = EEEDepartment("CSE", "21", 136)
print("4=================================")
e1.addStudentWithSemester("David", "Fall-19", "Simon", "Summer-20", "Tony", "Spring-21")
print("5=================================")
print(e1)
print("6=================================")
print("Total Number of Students:", Department.studentCount)

# OUTPUT:
# CSE department’s code value is 01
# 1===============================
# Student ID generated and all students added
# 2===============================
# Department Name: CSE
# Credit hours: 136
# Total students(s): 3
# Student details:
# ID: 20101001 Name: Bob
# ID: 20201002 Name: Mike
# ID: 21301003 Name: Carol
# 3################################
# EEE department’s code value is 21
# 4===============================
# Student ID generated and all students added
# 5===============================
# Department Name: EEE
# Credit hours: 136
# Total students(s): 3
# Student details:
# ID: 19221001 Name: David
# ID: 20321002 Name: Simon
# ID: 21121003 Name: Tony
# 6===============================
# Total Number of Students: 6