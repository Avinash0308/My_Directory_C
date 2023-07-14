#include <stdio.h>
int main()
{
    //This program will help you in understanding the functionality of array and pointers
    int arr[10];
    int *poin = arr;
    arr[0] = 3;
    arr[1] = 5;
    printf("%d\n", &arr[0]);
    printf("%d\n", arr[0]);
    printf("%d\n", arr);
    printf("%d\n", arr + 1);
    printf("%d\n", poin);
    printf("%d\n", *poin);
    printf("%d\n", arr[0] + 1);
    printf("%d\n", *(arr + 1));
    printf("%d\n", *(arr + 2));
    printf("%d\n", arr[1]);
    return 0;
}
