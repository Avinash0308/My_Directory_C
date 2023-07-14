#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int a;
    int *arr;
    arr = (int *)calloc(10, sizeof(int));

    // printf("Please tell me the number of values you want to put in your array\n\n");
    // scanf("%d", &a);
    for (int i = 0; i <  10; i++)
    {
        scanf("%d", &arr[i]);
        if (i == 5)
        {
            free(arr);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d\n", arr[i]);
    }

    return 0;
}