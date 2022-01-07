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


class Bus:

    def __init__(self, name, destinationDict):
        self.name = name
        self.destinationDict = destinationDict
        self.passengers = []
        self.soldTicket = 0

    def addPassenger(self, *args):
        for arg in args:
            if arg.destination in self.destinationDict:
                print(arg.name + " get into the bus")
                self.passengers.append(arg)
            else:
                print("Sorry " + arg.name +
                      ", the bus won’t go to " + arg.destination)

    def showDetail(self):

        soldTicket = 0
        for passenger in self.passengers:
            soldTicket += self.destinationDict[passenger.destination]
        totalPassenger = len(self.passengers)
        destinations = []
        for destination in self.destinationDict:
            destinations.append(destination)
        if(soldTicket > self.soldTicket):
            self.soldTicket = soldTicket
        print("Total ticket sell: " + str(self.soldTicket) + " Taka")
        print("Total passenger: " + str(totalPassenger))
        dictOfDestinations = {}
        for destinationX in destinations:
            dictOfDestinations[destinationX] = []
            for passenger in self.passengers:
                if passenger.destination == destinationX:
                    dictOfDestinations[destinationX].append(passenger.name)
        for elem in dictOfDestinations:
            if(dictOfDestinations[elem]):
                print(elem + ": " + ', '.join(dictOfDestinations[elem]))

    def dropPassesger(self, destination):
        removable = []
        for passenger in self.passengers:
            if passenger.destination == destination:
                # self.passengers.remove(passenger)
                removable.append(passenger)
        print("All passengers of " + destination + " are dropped")
        for removablepassenger in removable:
            self.passengers.remove(removablepassenger)


class Passenger:
    def __init__(self, name, destination):
        self.name = name
        self.destination = destination


b = Bus("Volvo", {"Chittagong": 1200, "Cumilla": 700, "CoxBazar": 1500})
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
