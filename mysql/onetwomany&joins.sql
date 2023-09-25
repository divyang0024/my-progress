CREATE DATABASE shop;

use shop;

CREATE table
    customers(
        id int PRIMARY key AUTO_INCREMENT,
        first_name VARCHAR(50),
        last_name VARCHAR(50),
        email VARCHAR(50)
    );

CREATE table
    orders(
        id int PRIMARY key AUTO_INCREMENT,
        order_date DATE,
        amount DECIMAL(8, 2),
        customer_id int,
        -- FOREIGN KEY:
        foreign key (customer_id) REFERENCES customers(id)
    );

INSERT INTO
    customers (first_name, last_name, email)
VALUES (
        'Boy',
        'George',
        'george@gmail.com'
    ), (
        'George',
        'Michael',
        'gm@gmail.com'
    ), (
        'David',
        'Bowie',
        'david@gmail.com'
    ), (
        'Blue',
        'Steele',
        'blue@gmail.com'
    ), (
        'Bette',
        'Davis',
        'bette@aol.com'
    );

INSERT INTO
    orders (
        order_date,
        amount,
        customer_id
    )
VALUES ('2016-02-10', 99.99, 1), ('2017-11-11', 35.50, 1), ('2014-12-12', 800.67, 2), ('2015-01-03', 12.50, 2), ('1999-04-11', 450.25, 5);

select *
from customers
    join orders on orders.customer_id = customers.id;

select
    first_name,
    last_name,
    max(order_date) as 'latest order',
    sum(amount) as 'total'
from customers
    join orders on orders.customer_id = customers.id
group BY
    first_name,
    last_name
ORDER BY total desc;

select * from orders;