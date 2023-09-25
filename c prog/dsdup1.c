#include <stdio.h>

int main()
{
    int array[10], i, n, j, flag = 0;
    printf("\n enter the size of the array  : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                flag = 1;
                printf("\n duplicate numbers found at location %d and %d", i, j);
            }
        }
    }
    if (flag == 0)
        printf("\n no duplicate found");
}