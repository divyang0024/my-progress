#include <stdio.h>

int main()
{
    int array[10], i, n, j, time;
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
                time++;
                printf("duplicate numbers found at index %d \n", j);
                printf("%d was the duplicated number\n", array[i]);
            }
        }
    }
    printf("there was %d duplicate in the array", time);
    return 0;
}