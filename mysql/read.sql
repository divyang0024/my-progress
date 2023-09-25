-- CREATE TABLE

--     cats (

--         cat_id INT AUTO_INCREMENT,

--         name VARCHAR(100),

--         breed VARCHAR(100),

--         age INT,

--         PRIMARY KEY (cat_id)

--     );

-- INSERT INTO

--     cats(name, breed, age)

-- VALUES ('Ringo', 'Tabby', 4), ('Cindy', 'Maine Coon', 10), ('Dumbledore', 'Maine Coon', 11), ('Egg', 'Persian', 4), ('Misty', 'Tabby', 13), ('George Michael', 'Ragdoll', 9), ('Jackson', 'Sphynx', 7);

-- select * from cats;

-- select name from cats;

-- select name,age,breed from cats;

-- select name,breed from cats WHERE age !=4; not important to include attr for conditions such as in this case where age was not selected for reading purpose but it was used for verifying age condition.

-- select name,age FROM cats where breed='tabby';

-- select cat_id,age FROM cats where cat_id=age;