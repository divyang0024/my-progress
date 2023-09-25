#include<stdio.h>

int main()
{
int arr[50][50];//2d array for making a matrix
int zero=0;//for calucating the number of zeroes in matrix
int i,j;//i for rows and j for column
int rows,columns;//for taking number of rows and columns
printf("please enter the number of rows you want in your matrix : \n");
scanf("%d",&rows);
printf("please enter the number of columns you want in your matrix : \n");
scanf("%d",&columns);
for(i=0;i<rows;i++)
{
    for (j=0;j<columns;j++)
    {
        printf("enter a value at arr[%d][%d]=",i,j);
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<columns;i++)
{
    for (j=0;j<columns;j++)
    {
        if(arr[i][j]==0)
        {
            zero++;
        }
    }
}
if(zero>(rows*columns)/2)
{
    printf("this matrix is a sparse matrix\n");
}
else
{
    printf("this matrix is not a sparse matrix\n"); 
}
return 0;
}