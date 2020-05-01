CREATE DATABASE march;

USE march;
CREATE TABLE team
(
  id int auto_increment PRIMARY KEY,
  seed int,
  school varchar(50),
  conference varchar(50)
);

CREATE TABLE users 
(
    id int primary key auto_increment, 
    username varchar(255), 
    password varchar(255),
    role varchar(255)
);

INSERT INTO users (username, password, role) VALUES ('admin', 'pwd', 'admin');

INSERT into team (seed, school, conference) VALUES( 1,'Kansas', 'Big 12 ');
INSERT into team (seed, school, conference) VALUES( 1,'North Carolina', 'ACC ');
INSERT into team (seed, school, conference) VALUES( 1,'Oregon', 'Pacific-12 ');
INSERT into team (seed, school, conference) VALUES( 1,'Virginia', 'ACC ');
INSERT into team (seed, school, conference) VALUES( 2,'Michigan State', 'Big Ten ');
INSERT into team (seed, school, conference) VALUES( 2,'Villanova', 'Big East ');
INSERT into team (seed, school, conference) VALUES( 2,'Oklahoma', 'Big 12 ');
INSERT into team (seed, school, conference) VALUES( 2,'Xavier', 'Big East ');
INSERT into team (seed, school, conference) VALUES( 3,'West Virginia', 'Big 12 ');
INSERT into team (seed, school, conference) VALUES( 3,'Miami (FLA.)', 'ACC ');
INSERT into team (seed, school, conference) VALUES( 3,'Utah', 'Pacific-12 ');
INSERT into team (seed, school, conference) VALUES( 3,'Texas A&M', 'SEC ');
INSERT into team (seed, school, conference) VALUES( 4,'Kentucky', 'SEC ');
INSERT into team (seed, school, conference) VALUES( 4,'Duke', 'ACC ');
INSERT into team (seed, school, conference) VALUES( 4,'California', 'Pacific-12 ');
INSERT into team (seed, school, conference) VALUES( 4,'Iowa State', 'Big 12 ');
INSERT into team (seed, school, conference) VALUES( 5,'Purdue', 'Big Ten ');
INSERT into team (seed, school, conference) VALUES( 5,'Indiana', 'Big Ten ');
INSERT into team (seed, school, conference) VALUES( 5,'Maryland', 'Big Ten ');
INSERT into team (seed, school, conference) VALUES( 5,'Baylor', 'Big 12 ');
INSERT into team (seed, school, conference) VALUES( 6,'Seton Hall', 'Big East ');
INSERT into team (seed, school, conference) VALUES( 6,'Arizona', 'Pacific-12 ');
INSERT into team (seed, school, conference) VALUES( 6,'Texas', 'Big 12 ');
INSERT into team (seed, school, conference) VALUES( 6,'Notre Dame', 'ACC ');
INSERT into team (seed, school, conference) VALUES( 7,'Iowa', 'Big Ten ');
INSERT into team (seed, school, conference) VALUES( 7,'Dayton', 'Atlantic 10 ');
INSERT into team (seed, school, conference) VALUES( 7,'Wisconsin', 'Big Ten ');
INSERT into team (seed, school, conference) VALUES( 7,'Oregon State', 'Pacific-12 ');
INSERT into team (seed, school, conference) VALUES( 8,'St. Josephs', 'Atlantic 10 ');
INSERT into team (seed, school, conference) VALUES( 8,'Colorado', 'Pacific-12 ');
INSERT into team (seed, school, conference) VALUES( 8,'Texas Tech', 'Big 12 ');
INSERT into team (seed, school, conference) VALUES( 8,'USC', 'Pacific-12 ');
INSERT into team (seed, school, conference) VALUES( 9,'Providence', 'Big East ');
INSERT into team (seed, school, conference) VALUES( 9,'Connecticut', 'American ');
INSERT into team (seed, school, conference) VALUES( 9,'Butler', 'Big East ');
INSERT into team (seed, school, conference) VALUES( 9,'Cincinnati', 'American ');
INSERT into team (seed, school, conference) VALUES( 10,'Virginia Commonwealth', 'Atlantic 10 ');
INSERT into team (seed, school, conference) VALUES( 10,'Pittsburgh', 'ACC ');
INSERT into team (seed, school, conference) VALUES( 10,'Temple', 'American ');
INSERT into team (seed, school, conference) VALUES( 10,'Syracuse', 'ACC ');
INSERT into team (seed, school, conference) VALUES( 11,'Wichita State', 'Missouri Valley ');
INSERT into team (seed, school, conference) VALUES( 11,'Gonzaga', 'West Coast ');
INSERT into team (seed, school, conference) VALUES( 11,'Tulsa', 'American ');
INSERT into team (seed, school, conference) VALUES( 11,'Vanderbilt', 'SEC ');
INSERT into team (seed, school, conference) VALUES( 11,'Michigan', 'Big Ten ');
INSERT into team (seed, school, conference) VALUES( 11,'Northern Iowa', 'Missouri Valley ');
INSERT into team (seed, school, conference) VALUES( 12,'Arkansas-Little Rock', 'Sun Belt ');
INSERT into team (seed, school, conference) VALUES( 12,'Yale', 'Ivy ');
INSERT into team (seed, school, conference) VALUES( 12,'South Dakota State', 'Summit ');
INSERT into team (seed, school, conference) VALUES( 12,'Chattanooga', 'Southern ');
INSERT into team (seed, school, conference) VALUES( 13,'NC-Wilmington', 'Colonial ');
INSERT into team (seed, school, conference) VALUES( 13,'Stony Brook', 'America East ');
INSERT into team (seed, school, conference) VALUES( 13,'Hawaii', 'Big West ');
INSERT into team (seed, school, conference) VALUES( 13,'Iona', 'Metro Atlantic ');
INSERT into team (seed, school, conference) VALUES( 14,'Fresno State', 'Mountain West ');
INSERT into team (seed, school, conference) VALUES( 14,'Stephen F. Austin', 'Southland ');
INSERT into team (seed, school, conference) VALUES( 14,'Buffalo', 'MAC ');
INSERT into team (seed, school, conference) VALUES( 14,'Wisconsin-Green Bay', 'Horizon ');
INSERT into team (seed, school, conference) VALUES( 15,'Middle Tennessee', 'CUSA ');
INSERT into team (seed, school, conference) VALUES( 15,'CSU Bakersfield', 'WAC ');
INSERT into team (seed, school, conference) VALUES( 15,'Weber State', 'Big Sky ');
INSERT into team (seed, school, conference) VALUES( 15,'NC-Asheville', 'Big South ');
INSERT into team (seed, school, conference) VALUES( 16,'Florida Gulf Coast', 'Atlantic Sun ');
INSERT into team (seed, school, conference) VALUES( 16,'Hampton', 'Mid-Eastern ');
INSERT into team (seed, school, conference) VALUES( 16,'Austin Peay', 'Ohio Valley ');
INSERT into team (seed, school, conference) VALUES( 16,'Holy Cross', 'Patriot ');
INSERT into team (seed, school, conference) VALUES( 16,'Fairleigh Dickinson', 'Northeast ');
INSERT into team (seed, school, conference) VALUES( 16,'Southern', 'SWAC ');
