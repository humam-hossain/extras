USE [master]
GO
/****** Object:  Database [bus_management_system]    Script Date: 5/16/2022 10:46:34 PM ******/
CREATE DATABASE [bus_management_system]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'bus_management_system', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL15.SQLEXPRESS\MSSQL\DATA\bus_management_system.mdf' , SIZE = 8192KB , MAXSIZE = UNLIMITED, FILEGROWTH = 65536KB )
 LOG ON 
( NAME = N'bus_management_system_log', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL15.SQLEXPRESS\MSSQL\DATA\bus_management_system_log.ldf' , SIZE = 8192KB , MAXSIZE = 2048GB , FILEGROWTH = 65536KB )
 WITH CATALOG_COLLATION = DATABASE_DEFAULT
GO
ALTER DATABASE [bus_management_system] SET COMPATIBILITY_LEVEL = 150
GO
IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [bus_management_system].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO
ALTER DATABASE [bus_management_system] SET ANSI_NULL_DEFAULT OFF 
GO
ALTER DATABASE [bus_management_system] SET ANSI_NULLS OFF 
GO
ALTER DATABASE [bus_management_system] SET ANSI_PADDING OFF 
GO
ALTER DATABASE [bus_management_system] SET ANSI_WARNINGS OFF 
GO
ALTER DATABASE [bus_management_system] SET ARITHABORT OFF 
GO
ALTER DATABASE [bus_management_system] SET AUTO_CLOSE OFF 
GO
ALTER DATABASE [bus_management_system] SET AUTO_SHRINK OFF 
GO
ALTER DATABASE [bus_management_system] SET AUTO_UPDATE_STATISTICS ON 
GO
ALTER DATABASE [bus_management_system] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO
ALTER DATABASE [bus_management_system] SET CURSOR_DEFAULT  GLOBAL 
GO
ALTER DATABASE [bus_management_system] SET CONCAT_NULL_YIELDS_NULL OFF 
GO
ALTER DATABASE [bus_management_system] SET NUMERIC_ROUNDABORT OFF 
GO
ALTER DATABASE [bus_management_system] SET QUOTED_IDENTIFIER OFF 
GO
ALTER DATABASE [bus_management_system] SET RECURSIVE_TRIGGERS OFF 
GO
ALTER DATABASE [bus_management_system] SET  DISABLE_BROKER 
GO
ALTER DATABASE [bus_management_system] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO
ALTER DATABASE [bus_management_system] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO
ALTER DATABASE [bus_management_system] SET TRUSTWORTHY OFF 
GO
ALTER DATABASE [bus_management_system] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO
ALTER DATABASE [bus_management_system] SET PARAMETERIZATION SIMPLE 
GO
ALTER DATABASE [bus_management_system] SET READ_COMMITTED_SNAPSHOT OFF 
GO
ALTER DATABASE [bus_management_system] SET HONOR_BROKER_PRIORITY OFF 
GO
ALTER DATABASE [bus_management_system] SET RECOVERY SIMPLE 
GO
ALTER DATABASE [bus_management_system] SET  MULTI_USER 
GO
ALTER DATABASE [bus_management_system] SET PAGE_VERIFY CHECKSUM  
GO
ALTER DATABASE [bus_management_system] SET DB_CHAINING OFF 
GO
ALTER DATABASE [bus_management_system] SET FILESTREAM( NON_TRANSACTED_ACCESS = OFF ) 
GO
ALTER DATABASE [bus_management_system] SET TARGET_RECOVERY_TIME = 60 SECONDS 
GO
ALTER DATABASE [bus_management_system] SET DELAYED_DURABILITY = DISABLED 
GO
ALTER DATABASE [bus_management_system] SET ACCELERATED_DATABASE_RECOVERY = OFF  
GO
ALTER DATABASE [bus_management_system] SET QUERY_STORE = OFF
GO
USE [bus_management_system]
GO
/****** Object:  Table [dbo].[Booking]    Script Date: 5/16/2022 10:46:34 PM ******/
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
/****** Object:  Table [dbo].[Bus]    Script Date: 5/16/2022 10:46:34 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Bus](
	[reg_no] [varchar](50) NOT NULL,
	[model_no] [varchar](50) NOT NULL,
	[seats] [int] NOT NULL,
 CONSTRAINT [PK_Bus] PRIMARY KEY CLUSTERED 
(
	[reg_no] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Passenger]    Script Date: 5/16/2022 10:46:34 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Passenger](
	[passenger_no] [varchar](50) NOT NULL,
	[first_name] [varchar](50) NOT NULL,
	[last_name] [varchar](50) NOT NULL,
 CONSTRAINT [PK_Passenger] PRIMARY KEY CLUSTERED 
(
	[passenger_no] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Trip]    Script Date: 5/16/2022 10:46:34 PM ******/
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
ALTER TABLE [dbo].[Trip]  WITH CHECK ADD  CONSTRAINT [FK_Trip_Bus] FOREIGN KEY([reg_no])
REFERENCES [dbo].[Bus] ([reg_no])
GO
ALTER TABLE [dbo].[Trip] CHECK CONSTRAINT [FK_Trip_Bus]
GO
USE [master]
GO
ALTER DATABASE [bus_management_system] SET  READ_WRITE 
GO
