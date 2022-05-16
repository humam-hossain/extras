USE [bus_management_system]
GO

SELECT * FROM dbo.Trip WHERE trip_from = 'Dhaka' and dep_time between '2022-05-16 05:00:00.000' and '2022-05-16 20:00:00.000' order by dep_time;

GO


