#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, sum = 0;

    printf("Enter number of numbers:");
    scanf("%d", &n);

    int *pc = (int *)calloc(sizeof(int), n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d:", i +1);
        scanf("%d", &pc[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += pc[i];
    }

    printf("Sum of the numbers: %d", sum);

    free(pc);
    return 0;    
    
}