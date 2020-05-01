drop database officemin;
create database officemin;

use officemin;
create table items (id int primary key auto_increment, brand varchar(255),
product varchar(255), price decimal(5, 2) );


insert into items (brand, product, price) values ("Folgers", "Coffee", 7.99);
insert into items (brand, product, price) values ("Dunder Mifflin", "Copy Paper", 53.99);
insert into items (brand, product, price) values ("Philipino", "Manila Folders", 6.99);
insert into items (brand, product, price) values ("HP", "Ink Cartridge", 36.99);
insert into items (brand, product, price) values ("Sparkle", "Paper Towels", 8.99);
insert into items (brand, product, price) values ("Gordon", "Flash Drive", 9.59);
