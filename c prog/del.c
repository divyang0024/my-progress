#include <stdio.h>

int main()
{
    int arr[50], i, pos, n;
    printf("enter the size of array\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter your %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("#####################################\n");
    for (i = 0; i < n; i++)
    {
        printf("your %d element : %d \n", i + 1, arr[i]);
    }
    printf("#####################################\n");
    printf("enter the position from which the number has to be deleted");
    scanf("%d", &pos);
    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("the result after deleteing the value from a specified location\n");
    for (i = 0; i < n; i++)
    {
        printf("the %d element is : %d \n", i + 1, arr[i]);
    }
    printf("#####################################\n");
}