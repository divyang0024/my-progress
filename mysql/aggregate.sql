-- COUNT:

select count(title) from books where title like '%the%';

select count(*) from books;

-- GROUP BY:

select
    CONCAT(
        author_fname,
        ' ',
        author_lname
    ) as author,
    COUNT(*)
from books
group by author;

-- MIN AND MAX:

select min(pages),max(pages) from books;

select
    CONCAT(
        author_fname,
        ' ',
        author_lname
    ) as author,
    max(title),
    max(pages) as 'longest book title'
from books
GROUP BY
    author_fname,
    author_lname;

-- if we just put title it will throw us an error since an author could have more tha one title so we have to be specific.

-- sub-query:

select *
from books
where released_year = (
        select min(released_year)
        from books
    );

-- sum:

select CONCAT(author_fname,' ',author_lname)as author,sum(pages) as 'total pages written' from books group by author;