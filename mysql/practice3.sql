use book_shop;

select
    DISTINCT author_fname,
    author_lname
from books
ORDER BY
    author_fname,
    author_lname desc;

select book_id as unikey from books order by 1 desc limit 14,5;

select distinct author_fname
from books
where author_fname like 'jh%';

select title from books where title like "%stories%";

select title,pages from books order by pages desc limit 0,1;

select
    concat(title, " - ", released_year) as summary
from books
order by released_year desc
limit 0, 3;

select title,author_lname from books where author_lname like '%\ %';

select
    title,
    released_year,
    stock_quantity
from books
ORDER BY
    stock_quantity,
    title
limit 0, 3;

select title,author_lname from books ORDER BY author_lname,title;

select
    UCASE(
        CONCAT(
            "MY FAVORITE AUTHOR IS ",
            author_fname,
            " ",
            author_lname,
            "!"
        )
    ) as yell
from books
ORDER BY author_lname;