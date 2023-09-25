create DATABASE detour;

-- creates a database.

show DATABASES;

-- show all the possible database present.

use detour;

-- selects a data base which we need to work on.

SELECT DATABASE();

-- tells the currently selected database.

CREATE TABLE
    products(
        id INT NOT NULL,
        name CHAR(50),
        price INT,
        PRIMARY KEY (id)
    );

-- creates a table with specified columns.

SHOW TABLES;

-- show all the possible tables present in currently selected database.

INSERT INTO products VALUES (1,"pen",1.20);

-- insert values inside of the table.

select * from products where id=1;

-- it will select the product name on the basis of id.

select * from products where name LIKE "p%";

-- It doesnt look for absoolute match but it look for attribute value with similar starting or end.

UPDATE products set name = "pencil" where price = 1;

select name from products where id=1;

ALTER TABLE products ADD company char(50) NOT NULL;

DESCRIBE products;

select * from products;

DELETE from products WHERE name = "pencil";

-- it delete a single column or sevral columns depending on the condition itself.

INSERT INTO products VALUES (1,"pen",2,"hauser");

select DATABASE();

use detour;

show TABLES;

select * from products;

drop Table products;

CREATE table
    products(
        id INT AUTO_INCREMENT,
        name CHAR(50),
        price FLOAT,
        stock INT,
        PRIMARY KEY (id)
    );

insert into
    products (name, price, stock)
VALUES ("pen", 1.20, 32), ("pencil", 0.80, 12);

SELECT * from products;

create table
    orders(
        id INT not null,
        order_number INT,
        customer_id INT,
        products_id INT,
        PRIMARY KEY (id),
        FOREIGN KEY (customer_id) REFERENCES customers(id),
        FOREIGN KEY (product_id) REFERENCES products(id),
    );