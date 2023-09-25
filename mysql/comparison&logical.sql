-- not equal:

select * from books where author_fname != 'dave';

-- NOT LIKE:

select author_fname from books where author_fname not like 'da%';

-- GREATER THAN:

select
    title as 'book having more than 500 pages',
    pages
from books
where pages > 500;

-- LESS THAN:

select
    title as 'book having more than 500 pages',
    pages
from books
where pages < 500;

-- >= & <=:

select * from books where pages >=300;

select * from books where pages <=300;

-- logical AND:

select
    title,
    CONCAT(
        author_fname,
        ' ',
        author_lname
    ) as author,
    released_year
from books
where
    author_fname = 'dave' && released_year > 2010;

-- logical OR:

select
    title,
    CONCAT(
        author_fname,
        ' ',
        author_lname
    ) as author,
    released_year
from books
where
    author_fname = 'dave' || released_year > 2010;

-- between:

select * from books where released_year between 2005 and 2010;

-- in operator:

select title, author_fname
from books
where
    author_fname in('dave', 'neil');

select title, author_fname
from books
where
    author_fname not in('dave', 'neil');

-- case:

select
    title,
    case
        when pages > 600 then '600+ pages'
        when pages > 500 then '500+ pages'
        when pages > 400 then '400+ pages'
        when pages > 300 then '300+ pages'
        else 'below 300 pages'
    end as 'page_ status'
from books;