#include<stdio.h>

int main()
{
char name[50];
int grade;
int rn;
char section;
printf("enter your name :\n");
gets(name);
puts(name);
printf("in what grade you are in :\n");
scanf("%d",&grade);
printf("grade you are in :%d\n",grade);
printf("in what section you are in :\n",section);
scanf(" %c",&section);
printf("section you are in :%c\n",section);
printf("what is your roll number :\n");
scanf("%d",&rn);
printf("your roll number is roll number :%d\n",rn);
return 0;
}