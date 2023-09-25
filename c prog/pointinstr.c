#include<stdio.h>

int main()
{
int n;
char str[n];
char *ptr=str;
gets(str);
for(int i=0;i<=n-1;i++)
{
printf("%c\n",*ptr);
ptr++;
}
}