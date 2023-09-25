select ucase(reverse('why does my cat look at me with such hatred?'));

-- i-like-cats

select REPLACE(title,' ','->') from books;

select
    author_lname as forward,
    reverse(author_lname) as backward
from books;

select
    ucase(
        concat(
            author_fname,
            ' ',
            author_lname
        )
    ) AS 'full name in caps'
from books;

select
    concat(
        title,
        " was released in ",
        released_year
    ) as blurb
from books;

select title,CHAR_LENGTH(title) as 'character count' from books;

select
    concat(left(author_lname, 10), '...') as 'short length',
    CONCAT_WS(
        ',',
        author_lname,
        author_fname
    ) as author,
    concat (stock_quantity, ' in stock') as 'quantity'
from books;