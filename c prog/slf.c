#include<stdio.h>
#include<string.h>
int main(){
char str[]="divyang";
char *pos;
pos=strchr(str,'a');
printf("%s",pos);
}