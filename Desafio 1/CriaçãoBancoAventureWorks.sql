create table Product_Categories(
ProductCategoryKey int not null,
CategoryName varchar(100),
primary key(ProductCategoryKey)
);

create table Products(

ProductKey int not null,
ProductSubcategoryKey int,
ProductSKU varchar(100),
ProductName varchar(100),
ModelName varchar(100),
ProductDescription varchar(100),
ProductColor varchar(100),
ProductSize varchar(100),
ProductStyle varchar(100),
ProductCost float,
ProductPrice float,
primary key(ProductKey)
);

create table Product_Subcategories(

ProductSubcategoryKey int not null,
SubcategoryName varchar(100),
ProductCategoryKey int,
primary key(ProductSubcategoryKey)
);

create table Customers(
CustomerKey int not null,
Prefix varchar(100),
FirstName varchar(100),
LastName varchar(100),
BirthDate date,
MaritalStatus varchar(100),
Gender varchar(100),
EmailAddress varchar(100),
AnnualIncome float,
TotalChildren int,
EducationLevel varchar(100),
Occupation varchar(100),
HomeOwner varchar(100),
primary key(CustomerKey)
);

create table Territories(
TerritoryKey int not null,
Region varchar(100),
Country varchar(100),
Continent varchar(100),
primary key(TerritoryKey)
);

create table Sales(
OrderDate date,
StockDate date,
OrderNumber int not null,
ProductKey int,
CustomerKey int,
TerritoryKey int,
OrderLineItem int,
OrderQuantity int,
primary key(OrderNumber),
foreign key(ProductKey) references Products(ProductKey),
foreign key(CustomerKey) references Customers(CustomerKey),
foreign key(TerritoryKey) references Territories(TerritoryKey)
);

create table Returns_(

ReturnDate date,
TerritoryKey int,
ProductKey int,
ReturnQuantity int,
foreign key(TerritoryKey) references Territories(TerritoryKey),
foreign key(ProductKey) references Products(ProductKey)
);

create table Calendar(
DataCalendario date
);

alter table Products add constraint fk_Products_Subcategories foreign key(ProductSubcategoryKey) 
references Product_Subcategories(ProductSubcategoryKey);

alter table Product_Subcategories add constraint fk_Categories_Subcategories foreign key(ProductCategoryKey) 
references Product_Categories(ProductCategoryKey);

select * from Calendar;

show variables like "secure_file_priv";

LOAD DATA INFILE 'C:\Users\angel\Downloads\archive\AdventureWorks_Calendar.csv'
INTO TABLE Calendar
FIELDS TERMINATED BY ','
ENCLOSED BY '"'
LINES TERMINATED BY '\n'
IGNORE 1 ROWS
(DataCalendario);
