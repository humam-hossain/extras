USE [bus_management_system]
GO

SELECT p.first_name + p.last_name as PassengerName, b.seat_no from Passenger p INNER JOIN Booking b ON b.passenger_no = p.passenger_no;

GO


