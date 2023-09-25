#include <stdio.h>

int main()
{
    int arr[50], i, loc, ch, n, value, aind, aloc;
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
    printf("press 1 to insert the value at the end or tap 0 to insert the value at specified location \n");
    scanf("%d", &ch);
    printf("#####################################\n");
    if (ch == 1)
    {
        loc = n + 1;
        printf("please enter the value you wont to insert at the end : ");
        scanf("%d", &value);
        printf("#####################################\n");
        arr[n] = value;
        printf("the end result of taking auxilary value at the end location is : \n");
        for (i = 0; i <= n; i++)
        {
            printf("the %d element is : %d \n", i + 1, arr[i]);
        }
        printf("#####################################\n");
        printf("the value has been placed at the end \n");
    }
    else
    {
        printf("enter a specified location to insert a value : \n");
        scanf("%d", &loc);
        printf("#####################################\n");
        printf("please enter the value you want to insert at a specified location : ");
        scanf("%d", &value);
        printf("#####################################\n");
        aind = n - 1;
        aloc = loc - 1;
        for (i = aind; i >= aloc; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[aloc] = value;
        printf("the result after putting the value at a specified location\n");
        for (i = 0; i <= n; i++)
        {
            printf("the %d element is : %d \n", i + 1, arr[i]);
        }
        printf("#####################################\n");
        printf("the value you asked for has been inserted at the deired location!!!!!!!!!!\n");
    }
    return 0;
}