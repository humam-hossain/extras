USE [bus_management_system]
GO

SELECT trip_no,trip_to,dep_time,arr_time,reg_no FROM dbo.Trip WHERE trip_from = 'Dhaka';

GO


