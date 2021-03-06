USE [bus_management_system]
GO
/****** Object:  Table [dbo].[Trip]    Script Date: 5/16/2022 10:30:21 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Trip](
	[trip_no] [varchar](50) NOT NULL,
	[trip_from] [varchar](50) NOT NULL,
	[trip_to] [varchar](50) NOT NULL,
	[dep_time] [datetime] NOT NULL,
	[arr_time] [datetime] NOT NULL,
	[reg_no] [varchar](50) NOT NULL,
 CONSTRAINT [PK_Trip] PRIMARY KEY CLUSTERED 
(
	[trip_no] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
ALTER TABLE [dbo].[Trip]  WITH CHECK ADD  CONSTRAINT [FK_Trip_Bus] FOREIGN KEY([reg_no])
REFERENCES [dbo].[Bus] ([reg_no])
GO
ALTER TABLE [dbo].[Trip] CHECK CONSTRAINT [FK_Trip_Bus]
GO
