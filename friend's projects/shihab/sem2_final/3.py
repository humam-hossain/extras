# Question: 3
# Design CSEDepartment and EEEDepartment class which inherit the Department 
# class so that the following code provides the expected output.
# [Student ID = 2 digits of admission year+ (semester_ID) + (deparment_code) + students created so far]
# 
# [ semester_ID Spring=1, 
#               Summer = 3, 
#               Fall = 2 ]

class Department:
     studentCount = 0
     def __init__(self,name):
         self.name = name
     def __str__(self):
         return "Department Name: " + self.name

#Write your code here

class CSEDepartment(Department):
    cse_students = {}
    cse_studentcount = 0

    def __init__(self, name, dept_code, credits):
        super().__init__(name)
        self.dept_code = dept_code
        self.credits = credits

        print("CSE department’s code value is", self.dept_code)

    def addStudentWithSemester(self, *args):
        lists = list(args)

        for i in range(0, len(lists), 2):
            Department.studentCount += 1
            CSEDepartment.cse_studentcount += 1

            code = lists[i+1].split("-")
            code[0], code[1] = code[1], code[0]

            if code[1] == "Spring":
                code[1] = "1"
            elif code[1] == "Summer":
                code[1] = "3"
            elif code[1] == "Fall":
                code[1] = "2"

            code.append(self.dept_code)
            if CSEDepartment.cse_studentcount < 10:
                code.append("00")
            elif CSEDepartment.cse_studentcount < 100:
                code.append("0")
            code.append(str(CSEDepartment.cse_studentcount))
            
            id = ''.join(code)

            CSEDepartment.cse_students[lists[i]] = id

        # print(CSEDepartment.cse_students, CSEDepartment.cse_studentcount)
        print("Student ID generated and all students added")

    def __str__(self):
        strings = ""
        for key, value in CSEDepartment.cse_students.items():
            strings += "\nID: " + value + " Name: " + key
        return super().__str__() + f"\nCredit hours: {self.credits}\nTotal students(s): {self.cse_studentcount}{strings}"
        

            
class EEEDepartment(Department):
    eee_students = {}
    eee_studentcount = 0

    def __init__(self, name, dept_code, credits):
        super().__init__(name)
        self.dept_code = dept_code
        self.credits = credits

        print("EEE department’s code value is", self.dept_code)
    
    def addStudentWithSemester(self, *args):
        lists = list(args)

        for i in range(0, len(lists), 2):
            Department.studentCount += 1
            EEEDepartment.eee_studentcount += 1
            
            code = lists[i+1].split("-")
            code[0], code[1] = code[1], code[0]

            if code[1] == "Spring":
                code[1] = "1"
            elif code[1] == "Summer":
                code[1] = "3"
            elif code[1] == "Fall":
                code[1] = "2"

            code.append(self.dept_code)
            if EEEDepartment.eee_studentcount < 10:
                code.append("00")
            elif EEEDepartment.eee_studentcount < 100:
                code.append("0")
            code.append(str(EEEDepartment.eee_studentcount))
            
            id = ''.join(code)
            EEEDepartment.eee_students[lists[i]] = id

        # print(EEEDepartment.eee_students, EEEDepartment.eee_studentcount)  
        print("Student ID generated and all students added")   

    def __str__(self):
        strings = ""
        for key, value in EEEDepartment.eee_students.items():
            strings += "\nID: " + value + " Name: " + key
        return super().__str__() + f"\nCredit hours: {self.credits}\nTotal students(s): {self.eee_studentcount}{strings}"
          

c1 = CSEDepartment("CSE", "01", 136)
print("1=================================")
c1.addStudentWithSemester("Bob", "Spring-20", "Mike", "Fall-20", "Carol", "Summer-21")
print("2=================================")
print(c1)
print("3#################################")
e1 = EEEDepartment("EEE", "21", 136)
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