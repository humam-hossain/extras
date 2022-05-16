USE [bus_management_system]
GO

SELECT COUNT(DISTINCT trip_no) FROM dbo.Trip WHERE trip_from = 'Dhaka';

GO


