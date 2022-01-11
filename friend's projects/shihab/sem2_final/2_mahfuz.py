#!/usr/bin/python3

"""
Question: 2
Design the Bus and Passenger class so that the given code generates the 
following output.

b=Bus("Volvo",{"Chittagong":1200,"Cumilla":700,"CoxBazar":1500})
p1 = Passenger("Bob", "Chittagong")
print("1=============================")
b.addPassenger(p1)
print("2=============================")
p2 = Passenger("Mike", "CoxBazar")
p3 = Passenger("Carol", "Barisal")
print("3=============================")
b.addPassenger(p2, p3)
print("4=============================")
b.showDetail()
print("5=============================")
p4 = Passenger("Alice", "Chittagong")
p5 = Passenger("David", "CoxBazar")
p6 = Passenger("Simon", "Cumilla")
p7 = Passenger("Tony", "Cumilla")
print("6=============================")
b.addPassenger(p4, p5, p6, p7)
print("7=============================")
b.showDetail()
print("8=============================")
b.dropPassesger("Cumilla")
print("9=============================")
b.showDetail()
print("10=============================")
b.dropPassesger("Chittagong")
print("11============================")
b.showDetail()

OUTPUT:
1=============================
Bob get into the bus
2=============================
3=============================
Mike get into the bus
Sorry Carol, the bus won’t go to Barisal
4=============================
Total ticket sell: 2700 Taka
Total passenger: 2
Chittagong: Bob
CoxBazar: Mike
5=============================
6=============================
Alice get into the bus
David get into the bus
Simon get into the bus
Tony get into the bus
7=============================
Total ticket sell: 6800 Taka
Total passenger: 6
Chittagong: Bob, Alice
CoxBazar: Mike, David
Cumilla: Simon, Tony
8=============================
All passengers of Cumilla are dropped
9=============================
Total ticket sell: 6800 Taka
Total passenger: 4
Chittagong: Bob, Alice
CoxBazar: Mike, David
10============================
All passengers of Chittagong are dropped
11============================
Total ticket sell: 6800 Taka
Total passenger: 2
CoxBazar: Mike, David
"""

### Mahfuz
def comma_sep_str(my_list):
    return ', '.join(my_list)

class Bus:
    total_sold = 0
    total_passenger = 0
    chittagong_passengers = []
    coxBazar_passengers = []
    cumilla_passengers = []    
    
    def __init__(self, name, ticketAmounts):
        self.name = name
        self.ticketAmounts = ticketAmounts
        
    def addPassenger(self, *passengerObjects):
        for passengerObj in passengerObjects:
            if passengerObj.destination == 'Chittagong':
                self.total_sold += self.ticketAmounts[passengerObj.destination]
                self.total_passenger += 1
                self.chittagong_passengers.append(passengerObj.name)
            elif passengerObj.destination == 'Cumilla':
                self.total_sold += self.ticketAmounts[passengerObj.destination]
                self.total_passenger += 1
                self.cumilla_passengers.append(passengerObj.name)
            elif passengerObj.destination == 'CoxBazar':
                self.total_sold += self.ticketAmounts[passengerObj.destination]
                self.total_passenger += 1
                self.coxBazar_passengers.append(passengerObj.name)
            else:
                print(f'Sorry {passengerObj.name}, the bus won’t go to {passengerObj.destination}')
                #raise ValueError(f'Destination of {passengerObj.name} must be exact Chittagong, Cumilla or CoxBazar')
        
    def dropPassesger(self, destination):
        if destination == 'Chittagong':
            print('All passengers of Chittagong are dropped')
        elif destination == 'Cumilla':
            print('All passengers of Cumilla are dropped')
        elif destination == 'CoxBazar':
            print('All passengers of CoxBazar are dropped')
        else:
            raise ValueError('Value must be exact Chittagong, Cumilla or CoxBazar')
    
    def showDetail(self):
        chittagong = f'Chittagong: {comma_sep_str(self.chittagong_passengers)} \n'
        coxBazar = f'CoxBazar: {comma_sep_str(self.coxBazar_passengers)} \n'
        cumilla = f'Cumilla: {comma_sep_str(self.cumilla_passengers)}'
        print(f'Total ticket sell: {self.total_sold} Taka \n\
Total passenger: {self.total_passenger} \n\
{chittagong}\
{coxBazar}\
{cumilla}', end='')
    
    
class Passenger:
    def __init__(self, name, destination):
        self.name = name
        self.destination = destination
        
b = Bus("Volvo", {"Chittagong": 1200,"Cumilla": 700,"CoxBazar": 1500})

p1 = Passenger("Bob", "Chittagong")
print("1=============================")
b.addPassenger(p1)
print("2=============================")
p2 = Passenger("Mike", "CoxBazar")
p3 = Passenger("Carol", "Barisal")
print("3=============================")
b.addPassenger(p2, p3)
print("4=============================")
b.showDetail()
print("5=============================")
p4 = Passenger("Alice", "Chittagong")
p5 = Passenger("David", "CoxBazar")
p6 = Passenger("Simon", "Cumilla")
p7 = Passenger("Tony", "Cumilla")
print("6=============================")
b.addPassenger(p4, p5, p6, p7)
print("7=============================")
b.showDetail()
print("8=============================")
b.dropPassesger("Cumilla")
print("9=============================")
b.showDetail()
print("10=============================")
b.dropPassesger("Chittagong")
print("11============================")
b.showDetail()

###