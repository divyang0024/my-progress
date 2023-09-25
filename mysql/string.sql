-- CREATE DATABASE book_shop;

-- USE book_shop;

-- concat:

-- select CONCAT('divyang',' ','mundotia');=>1

-- select CONCAT(author_fname,' ',author_lname) from books;=>2

--concat_ws:

-- select CONCAT_WS('-',title,author_fname,author_lname ) from books;

-- SUBSTRING or SUBSTR:

-- SELECT SUBSTR(author_fname,1,2) from books;

-- combining string FUNCTIONs:

-- SELECT

--     CONCAT(

--         concat_ws(

--             '-',

--             title,

--             author_fname,

--             substr(author_lname, 1, 4)

--         ),

--         '...'

--     ) as publication

-- from books;

-- select

--     concat(

--         substr(author_fname, 1, 4),

--         '...',

--         substr(author_lname, 1, 4),

--         '...'

--     )

-- from books;

-- replace:

-- select REPLACE('divyang mundotia','divyang','deeshu');remember that the replacement string has to  be case sensitive if it is not it will not work in the desired manner.

-- Reverse:

-- select reverse ('divyang');

-- CHAR_LENGTH:

-- select CHAR_LENGTH('divyang');

-- length:

-- select LENGTH('दिव्यांग');

-- lower or lcase and upper or ucase:

-- select upper('divyang');

-- select ucase('divyang');

-- select upper('DIVYANG');

-- select ucase('DIVYANG');
--  select insert('hey pal',4,1,' there ');
-- select left('divyang',3);
-- select right('divyang',3);
-- select REPEAT(' divyang',3);
-- select trim ('          divyang');
-- select trim (LEADING '.'from '........divyang.......');
-- select trim (TRAILING '.'from '........divyang.......');
-- select trim (both '.'from '........divyang.......');