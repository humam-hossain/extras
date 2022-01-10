class Employee:

    num_of_employees = 0
    raise_ammount = 1.04
    
    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.email = first + "." + last + "@company.com"
        self.pay = pay

        Employee.num_of_employees += 1

    def fullname(self):
        return '{} {}'.format(self.first, self.last)
    
    def apply_raise(self):
        self.pay = int(self.pay * self.raise_ammount)

class Developer(Employee):
    raise_ammount = 1.10

    def __init__(self, first, last, pay, prog_lang):
        super().__init__(first, last, pay)
        self.prog_lang = prog_lang

class Manager(Employee):

    def __init__(self, first, last, pay, employees=None):
        super().__init__(first, last, pay)
        if employees is None:
            self.employees = []
        else:
            self.employees = employees
    
    def add_emp(self, emp):
        if emp not in self.employees:
            self.employees.append(emp)
    
    def remove_emp(self, emp):
        if emp in self.employees:
            self.employees.remove(emp)

    def print_emp(self):
        for emp in self.employees:
            print('-->', emp.fullname())
    

dev_1 = Developer("Humam", "Hossain", 50000, "Python")
dev_2 = Developer("Nazib", "Abrar", 60000, "Java")

mgr_1 = Manager("Test", "User", 90000, [dev_1])
# print(dev_1.email, dev_1.prog_lang)
# print(dev_2.email, dev_2.prog_lang)

mgr_1.add_emp(dev_2)
mgr_1.remove_emp(dev_1)
mgr_1.print_emp()