-- false

-- true

-- true

select title,released_year from books where released_year < 1980;

select title, author_fname
from books
where
    author_lname in('eggers', 'chabon');

select title, released_year
from books
where
    author_lname = 'lahiri'
    and released_year > 2000;

select title,pages from books where pages between 100 and 200;

select
    author_fname,
    author_lname
from books
where
    author_lname like 'c%'
    or author_lname like 's%';

select
    title,
    author_lname,
    CASE
        WHEN title like '%stories%' THEN 'short stories'
        WHEN title like '%just kids%'
        or title like '%a heartbreaking work%' THEN 'memoir'
        ELSE 'novel'
    END as TYPE from books;

    select author_fname,author_lname,CASE 
        WHEN count(author_fname) > 1 THEN concat(count(author_fname),' books') 
        ELSE '1 book'  
    END as count
from books group by author_fname,author_lname;