#include <stdio.h>

int main()
{
    char arr[2][5];

    for (int i = 0; i < 2; i++)
    {
        printf("enter : ");
        scanf("%s", arr[i]);
    }
      for (int i = 0; i < 2; i++)
    {
        printf("the %d string is : %s \n",i+1,arr[i]);
    }
}