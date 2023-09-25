-- UNIQUE:

-- create table user(u_name VARCHAR(50) not null,phone_no not integer null unique);

-- CHECK:

-- create table user(u_name VARCHAR(50) not null,age integer check(age>=18));

-- CONSTRAINT:

-- create table user(u_name VARCHAR(50) not null,age integer not null,constraint age_verify check (age>18));

-- multi-column-constriant:

create table
    user(
        u_name VARCHAR(50) not null,
        u_age int not null,
        u_address VARCHAR(300),
        u_juvi_age integer not null,
        constraint location_verify UNIQUE(u_name, u_address),
        constraint legal_age_verfiy check(u_juvi_age < u_age)
    );

insert into
    user(
        u_name,
        u_age,
        u_address,
        u_juvi_age
    )
values ('tyler', 88, 'street-77,bk', 16);

insert into
    user(
        u_name,
        u_age,
        u_address,
        u_juvi_age
    )
values ('tyler', 78, 'street-77,bk', 18);

-- adding up column in existing table:

alter table user add COLUMN gender CHAR(1) DEFAULT ' ';

-- deleting a column in existing table:

 alter table user drop column gender;

-- renaming a table and column:

rename table user to user_info;

 show TABLEs;

 alter TABLE user_info RENAME column u_address to u_location;

 select * from user_info;

--  modify column:

alter table user_info modify column u_location VARCHAR(50) ;

-- alter constraints:

alter table user_info add constraint uni_all UNIQUE (u_name ,u_age ,u_location ,u_juvi_age );
alter table user_info drop constraint uni_all;