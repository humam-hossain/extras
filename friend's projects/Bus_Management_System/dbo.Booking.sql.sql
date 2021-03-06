USE [bus_management_system]
GO
/****** Object:  Table [dbo].[Booking]    Script Date: 5/16/2022 10:30:21 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Booking](
	[booking_no] [varchar](50) NOT NULL,
	[trip_no] [varchar](50) NOT NULL,
	[seat_no] [varchar](50) NOT NULL,
	[passenger_no] [varchar](50) NOT NULL,
 CONSTRAINT [PK_Booking] PRIMARY KEY CLUSTERED 
(
	[booking_no] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
ALTER TABLE [dbo].[Booking]  WITH CHECK ADD  CONSTRAINT [FK_Booking_Passenger] FOREIGN KEY([passenger_no])
REFERENCES [dbo].[Passenger] ([passenger_no])
GO
ALTER TABLE [dbo].[Booking] CHECK CONSTRAINT [FK_Booking_Passenger]
GO
ALTER TABLE [dbo].[Booking]  WITH CHECK ADD  CONSTRAINT [FK_Booking_Trip] FOREIGN KEY([trip_no])
REFERENCES [dbo].[Trip] ([trip_no])
GO
ALTER TABLE [dbo].[Booking] CHECK CONSTRAINT [FK_Booking_Trip]
GO
