#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int (*ptr)(int, int);
    ptr = &sum;
    int a = (*ptr)(34, 3434);
    printf("The value of a is %d\n", a);
    return 0;
}