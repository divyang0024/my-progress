select DAYOFWEEK(CURTIME());

select DATE_FORMAT(CURRENT_TIMESTAMP,"%b %D at %H:%i ");

CREATE Table tweets(
    text varchar(500) not null,
    username VARCHAR(30),
    posted_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

insert into tweets (text,username) values ("hey there, this is my first tweet.",'divyang');

select * from tweets;