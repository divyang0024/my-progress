CREATE table
    people(
        name VARCHAR(50) not null,
        dob date not null,
        tob time not null,
        dtob datetime not null
    );

insert into
    people (name, dob, tob, dtob)
values (
        'ram',
        '2003-08-30',
        '04:54:56',
        '2003-08-30 04:54:56'
    );

insert into
    people (name, dob, tob, dtob)
values (
        'sham',
        CURRENT_DATE(),
        CURTIME(),
        now()
    );

-- day functions:

select DAYNAME(dob) from people;

select monthNAME(dob) from people;

select day(dtob) from people;

select dayofweek(dtob) from people;

select dayofyear(dtob) from people;

-- time functions:

select
    hour(tob) as 'hour',
    minute(tob) as 'minute',
    SECOND(tob) as 'second'
from people;

-- date math:

select DATEDIFF(CURRENT_DATE(),dob) from people;

select TIMEDIFF(CURRENT_TIME(),tob) from people;

select DATE_ADD(dob,INTERVAL 45 day) from people;
select DATE_sub(dob,INTERVAL 45 day) from people;

-- timestamp:

create table caption(
    text varchar(500),
    posted_at TIMESTAMP DEFAULT current_timestamp,
    upadated_at TIMESTAMP on update current_timestamp
);

insert into caption(text) values ('friday hai aj!!!!.');

UPDATE caption set text ='ptani bhai.';
select * from caption;