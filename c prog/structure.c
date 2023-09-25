#include<stdio.h>
struct employee
{
    int code;
    float salary;
    char name;
}; 
int main()
{
int n;
printf("plz enter no of emolyee\n");
scanf("%d",&n);
printf("*****************************************************\n");
printf("VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\n");
struct employee infosys[n];
for(int i=0;i<n;i++)
{
    printf("enter %d postion employee code\n",i+1);
    scanf("%d",&infosys[i].code);
    printf("enter %d postion employee salary\n",i+1);
    scanf("%f",&infosys[i].salary);
    printf("enter %d postion employee name\n",i+1);
    scanf("%s",&infosys[i].name);
    printf("*****************************************************\n");
}
for(int i=0;i<n;i++)
{
    printf("%d postion employee code is=%d\n",i+1,infosys[i].code);
    printf("%d postion employee code is=%f\n",i+1,infosys[i].salary);
    printf("%d postion employee code is=%s\n",i+1,infosys[i].name);
    printf("*****************************************************\n");
}
return 0;
}