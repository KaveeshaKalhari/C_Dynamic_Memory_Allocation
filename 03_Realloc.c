#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;

    printf("Enter number of numbers:");
    scanf("%d", &n);

    int *pm = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d:", i + 1);
        scanf("%d", (pm + i));
    }

    for (int i = 0; i < n; i++)
    {
        sum += *(pm + i);
    }
    printf("Sum of the numbers:%d", sum);

//realloc
    pm = (int *)realloc(pm, n + 10);

    printf("\nEnter 10 numbers:\n");

    for (int i = n; i < n+10; i++)
    {
        printf("Enter number %d:", (i+1));
        scanf("%d", (pm + i));
    }

    for (int i = n; i < n + 10; i++)
    {
        sum += *(pm + i);
    }

    printf("Sum of the 10 numbers: %d", sum);

    free(pm);
    return 0;
}