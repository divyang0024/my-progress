#include<stdio.h>
#include<conio.h>

void countsum (int[]);

void main()
{
    printf("divyang\n");
    int a[10],i;
    printf("\n enter 10 numbers : ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    countsum(a);
    getch();
}
void countsum(int q[10])
{
    int i,c=0,d=0,s1=0,s2=0;
    for(i=0;i<10;i++)
    {
        if(q[i]%2==0)
        {
            c++;
            s1 += q[i];
        }
        else
        {
            d++;
            s2 += q[i];
        }
    }
    printf("\n total even numbers : %d ",c);
    printf("\n total odd numbers : %d ",d);
    printf("\n sum  of even numbers : %d ",s1);
    printf("\n sum of even numbers : %d ",s2);
}