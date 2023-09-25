#include<stdio.h>

int main()
{
int i=83;
int *ptr=&i;
printf("%u\n",i);
printf("%u\n",ptr);
printf("%u\n",*ptr);
printf("%u\n",&i);
printf("%u\n",&ptr);
printf("%u\n",*(&i));
printf("%u\n",*(&ptr));
printf("%u\n",&(*ptr));//*this thing will get wrong in case of scanf*//
return 0;
}