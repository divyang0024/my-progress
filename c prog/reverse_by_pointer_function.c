#include<stdio.h>
int reverse(int *,int n);
int main()
{
int r[10]={1,2,3,5,6,8,9,76,4,34},n=10,t;
reverse(&r[10],n);
return 0;
}
int reverse(int *p,int n)
{
int i;
for (i = 0; i < n ; i++)
{
   p=p-1;
   printf("######################\n");
   printf(" %dst number is reversed!!!!!! = %d\n",i+1,*p);
   printf("######################\n");
}
}