CREATE DATABASE ajax;

USE ajax;
CREATE TABLE user
(
  id bigint auto_increment PRIMARY KEY,
  FirstName varchar(255),
  LastName varchar(255),
  Age int,
  Hometown varchar(255),
  Job varchar(255)
);

CREATE TABLE sysusers 
(
    id int primary key auto_increment, 
    username varchar(255), 
    password varchar(255) 
);

-- insert a row into the sysusers table for the administrator:
-- username = foo
-- password = bar
INSERT INTO sysusers (username, password) VALUES ('foo', '$2y$10$IWDcVmWIHlx5nI5A.18gNOUDoJZgdfWJwFMamea9JaUK9M.iTx8g.');

INSERT user (FirstName, LastName, Age, Hometown, Job)
VALUES ('Peter', 'Griffin', 41, 'Quahog', 'Brewery');
INSERT user (FirstName, LastName, Age, Hometown, Job)
VALUES ('Lois', 'Griffin', 40, 'Newport', 'Piano Teacher');
INSERT user (FirstName, LastName, Age, Hometown, Job)
VALUES ('Joseph', 'Swanson', 39, 'Quahog', 'Police Officer');
INSERT user (FirstName, LastName, Age, Hometown, Job)
VALUES ('Glenn', 'Quagmire', 41, 'Quahog', 'Pilot');
