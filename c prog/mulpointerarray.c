#include<stdio.h>

int main()
{
    int m[3][10],i,j,k;
    printf("your table of 2,9,7 are down below repectively:\n");
    printf("********************\n");
    for ( i = 0; i < 10; i++)
    {
        m[0][i]=2*(i+1);
        printf("%dx%d=%d\n",2,i+1,m[0][i]);
    }
    printf("********************\n");
    for ( j = 0; j< 10; j++)
    {
        m[1][j]=9*(j+1);
        printf("%dx%d=%d\n",9,j+1,m[1][j]);
    }
    printf("********************\n");
    for ( k = 0; k< 10; k++)
    {
        m[2][k]=7*(k+1);
        printf("%dx%d=%d\n",7,k+1,m[2][k]);
    }
     printf("********************\n");
}