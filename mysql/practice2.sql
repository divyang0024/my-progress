-- CREATE Table

--     shirts(

--         shirt_id INTEGER PRIMARY KEY AUTO_INCREMENT,

--         article VARCHAR(50),

--         color VARCHAR(50),

--         shirts_size VARCHAR(1),

--         last_worn INTEGER

--     );

-- INSERT INTO

-- shirts (

--     article,

--     color,

--     shirts_size,

--     last_worn

-- )

-- VALUES ('t-shirt', 'white', 'S', 10), ('t-shirt', 'green', 'S', 200), ('polo shirt', 'black', 'M', 10), ('tank top', 'blue', 'S', 50), ('t-shirt', 'pink', 'S', 0), ('polo shirt', 'red', 'M', 5), ('tank top', 'white', 'S', 200), ('tank top', 'blue', 'M', 15);

-- INSERT into shirts (article, color, shirts_size, last_worn ) VALUES ('polo shirt','purple','M',50);->1

-- SELECT article,color from shirts;->2

-- SELECT shirt_id from shirts where shirts_size = 'M';->3

-- UPDATE shirts set shirts_size='L' WHERE article = 'polo shirt';->4

-- UPDATE shirts set last_worn=0 WHERE last_worn=15;->5

-- UPDATE shirts

-- set

--     shirts_size = 'x',

--     color = 'off white'

-- where color = 'white';->6

-- DELETE from shirts where last_worn=200;->7

-- DELETE from shirts where article="tank top";->8

-- DELETE from shirts;->9

-- drop table shirts;->10