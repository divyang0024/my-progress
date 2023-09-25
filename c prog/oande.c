#include<stdio.h>

int main()
{
int arr[100];
int size;
int odd=0;
int even=0;
int num;
int temp[100];
int sum=0;
printf("how many numbers you want to enter : ");
scanf("%d",&num);
for (int i = 0; i < num; i++)
{
  printf("enter the %d number : ",i+1);
  scanf("%d",&arr[i]);
  if(arr[i]%2==0)
  {
   printf("%d is even!!!!\n",arr[i]);
   even++;
  }
  else
  {
  printf("%d is odd!!!!\n",arr[i]);
  odd++;
  }
}
printf("the number of even numbers are %d\n",even);
printf("the number of odd numbers are %d\n",odd);
return 0;
}