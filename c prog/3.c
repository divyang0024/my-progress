#include<stdio.h>
int main(void) {
  printf("divyang\n");
   int firstnum, secondnum;
   int prod = 0,i;
 
   printf("Enter two numbers \n");
   scanf("%d %d",&firstnum,&secondnum);
 
   for(i = 1; i <= secondnum; i++){
     /* Add the value of firstnum in prod. */
     prod += firstnum;
   }
   printf("Multiplication of two numbers is %d",prod);
   return 0;
}