#include<stdio.h>

int main()
{
int n,i;
printf("enter the array size\n");
scanf("%d",&n);
int arr[n],*ptr=arr;
for(i=0;i<=n;i++)
{
printf("enter your %d number : \n",i+1);
scanf("%d",ptr+i);
}
for (i = 0; i <=n; i++)
{
printf("the number you enterd on %d postion is : %d \n",i+1,*(ptr+i));
}
return 0;
}