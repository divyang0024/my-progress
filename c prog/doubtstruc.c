#include <stdio.h>
struct st
{
    int no;
    int po;
    int lo;
};
int main()
{
    struct st *s;
    printf("your no is : %d", (*s).no);
}