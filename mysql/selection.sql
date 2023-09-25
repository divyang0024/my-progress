-- use book_shop;

-- INSERT INTO

--     books (

--         title,

--         author_fname,

--         author_lname,

--         released_year,

--         stock_quantity,

--         pages

--     )

-- VALUES (

--         '10% Happier',

--         'Dan',

--         'Harris',

--         2014,

--         29,

--         256

--     ), (

--         'fake_book',

--         'Freida',

--         'Harris',

--         2001,

--         287,

--         428

--     ), (

--         'Lincoln In The Bardo',

--         'George',

--         'Saunders',

--         2017,

--         1000,

--         367

--     );

-- select * from books;

-- DISTINCT:

-- select DISTINCT author_fname,author_lname from books;it search for discreate combination of data which means that if all specified attr are same only then it will remove the replication in data otherwise it will not.

-- select DISTINCT CONCAT_WS('-',author_fname,author_lname ) from books;

-- ORDER BY:

-- select author_fname from books order by author_fname; by DEFAULT it is in ascending order.

-- select author_fname from books order by author_fname desc;

-- select author_fname,author_lname from books order by 1 desc;

-- select author_fname,author_lname,released_year from books order by 1,2,3; it will order the data in combined way which means that it will not order individual columns rather it will sort all COLUMNS all-together if ordering is done for multiple columns.

-- LIMIT:

-- select
--     author_fname,
--     author_lname
-- from books
-- ORDER BY 2 desc
-- limit 3, 5;

-- LIKE:
-- SELECT
--     title,
--     author_fname,
--     author_lname,
--     pages
-- FROM books
-- WHERE author_fname LIKE '%da%';

-- SELECT
--     title,
--     author_fname,
--     author_lname,
--     pages
-- FROM books
-- WHERE title LIKE '%:%';

-- SELECT * FROM books WHERE author_fname LIKE '____';

-- SELECT * FROM books WHERE author_fname LIKE '_a_';