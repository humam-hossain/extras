# Problem:
# Question: 3
# Design CSEDepartment and EEEDepartment class which inherit the Department
# class so that the following code provides the expected output.
#        [Student ID = 2 digits of admission year+ (semester_ID) +
# (department_code) + students created so far]
#         [ For Spring, semester_ID =1, for Summer, semester_ID = 3, for Fall,
# semester_ID = 2 ]

# class Department:
#      studentCount = 0
#      def __init__(self,name):
#          self.name = name
#      def __str__(self):
#          return "Department Name: " + self.name

# #Write your code here
# c1 = CSEDepartment("CSE", "01", 136)
# print("1=================================")
# c1.addStudentWithSemester("Bob", "Spring-20", "Mike", "Fall-20", "Carol", "Summer-21")
# print("2=================================")
# print(c1)
# print("3#################################")
# e1 = EEEDepartment("EEE", "21", 136)
# print("4=================================")
# e1.addStudentWithSemester("David", "Fall-19", "Simon", "Summer-20", "Tony", "Spring-21")
# print("5=================================")
# print(e1)
# print("6=================================")
# print("Total Number of Students:", Department.studentCount)

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
##################################

class Department:
    students = []
    studentCount = 0

    def __init__(self, name, dept_code, credit_hours):
        self.name = name
        self.dept_code = dept_code
        self.credit_hours = credit_hours

    def __str__(self):
        students = list(
            filter(lambda obj: obj['dept'] == self.__getClassName(), self.students))

        student_details = 'Student details:\n'
        for each in students:
            student_details += f"ID: {each['id']} Name: {each['name']}"
            if students.index(each) != len(students) - 1:  # is not last element (index)
                student_details += '\n'

        return f'Department Name: {self.name}\n\
Credit hours: {self.credit_hours}\n\
Total student(s): {len(students)}\n\
{student_details}'

    def __getClassName(self):
        return self.__class__.__name__

    def __getStudentCount(self):
        return self.__getattribute__('studentCount')

    def __setStudentCount(self, value):
        self.__setattr__('studentCount', value)

    def addStudentWithSemester(self, *students):
        for i in range(0, len(students), 2):
            get_student_name = students[i]

            # Generating student id
            admission_year = students[i+1].split('-')[1]

            semester_id = 0
            if students[i+1].split('-')[0] == 'Spring':
                semester_id = 1
            elif students[i+1].split('-')[0] == 'Summer':
                semester_id = 3
            elif students[i+1].split('-')[0] == 'Fall':
                semester_id = 2
            else:
                raise ValueError('Value must be Spring or Summer or Fall')

            student_serial = self.__getStudentCount()
            self.__setStudentCount(student_serial + 1)

            get_student_id = admission_year[-2:] + str(semester_id) + str(
                self.dept_code) + str(student_serial).zfill(3)

            # Push students \w generated student id
            self.students.append({
                'id': get_student_id,
                'name': get_student_name,
                'dept': self.__getClassName()
            })

            # For getting studentCount \w base class
            Department.studentCount += 1

        # Department.students = self.students
        print("Student ID generated and all students added")

        # Set students to child class
        self.__setattr__('students', list(
            filter(lambda obj: obj['dept'] == self.__getClassName(), self.students)))

        # For getting all students \w base class
        Department.students += self.students


class CSEDepartment(Department):
    students = []
    studentCount = 0

    def __init__(self, name, dept_code, credit_hours):
        super().__init__(name, dept_code, credit_hours)
        print(f'{self.name} department’s code value is {self.dept_code}')


class EEEDepartment(Department):
    students = []
    studentCount = 0

    def __init__(self, name, dept_code, credit_hours):
        super().__init__(name, dept_code, credit_hours)
        print(f'{self.name} department’s code value is {self.dept_code}')


# Write your code here
c1 = CSEDepartment("CSE", "01", 136)
print("1=================================")
c1.addStudentWithSemester("Bob", "Spring-20", "Mike",
                          "Fall-20", "Carol", "Summer-21")
print("2=================================")
print(c1)
print("3#################################")
e1 = EEEDepartment("EEE", "21", 136)
print("4=================================")
e1.addStudentWithSemester("David", "Fall-19", "Simon",
                          "Summer-20", "Tony", "Spring-21")
print("5=================================")
print(e1)
print("6=================================")
print("Total Number of Students:", Department.studentCount)

print('==Extra==')
print('Department.students:', Department.students, len(Department.students))
print('Department.studentCount:', Department.studentCount)
print('c1.students:', c1.students, len(c1.students))
print('c1.studentCount:', c1.studentCount)
print('e1.students:', e1.students, len(c1.students))
print('e1.studentCount:', e1.studentCount)
