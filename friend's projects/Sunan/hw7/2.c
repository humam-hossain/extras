// 2) Write a structure called PlaneTicket that has 3 members: a character array Name of length 100,
//  a character array Destination of length 100, a float TicketPrice. 
// Declare 2 variables of structure type PlaneTicket and initialize them with the following data: 
//      1) Name: Monir, Destination: Bombay, Ticket Price: 22000.25 
//      2) Name: Sharmin, Destination: Bangkok, Ticket Price: 12500.75

#include <stdio.h>

struct PlaneTicket
{
    char Name[100];
    char Destination[100];
    float TicketPrice;
};

int main()
{
    struct PlaneTicket Pt1 = {"Monir", "Bombay", 22000.25};
    struct PlaneTicket Pt2 = {"Sharmin", "Bangkok", 12500.75};

    return 0;
}