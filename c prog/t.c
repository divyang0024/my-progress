#include<stdio.h>
int a=34;
void display();//function prototype
int main()
{
int b=12;
 printf("the value of b = %d",b);
 display(a);
return 0;
}
void display()
{ 
  printf("the value of a = %d\n",a);
}