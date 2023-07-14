#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\nIn this program i will write all the dynamic memory code\n\n");
    printf("You can give as many value want\n\n");
    int *ptr;
    int n;
    printf("Tell me how many values you want to type\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Please enter the value %d\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value %d is %d\n", i + 1, ptr[i]);
    }

    return 0;
}