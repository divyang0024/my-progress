select count(title) from books;

select count(*), released_year from books GROUP BY released_year;

select sum(stock_quantity) from books;

select CONCAT(author_fname,' ',author_lname) as author,avg(released_year) from books group by author;

select CONCAT(author_fname,' ',author_lname) from books where pages=(select max(pages) from books);
select released_year as 'year',count(*),avg(pages) from books group by released_year ORDER BY released_year ;