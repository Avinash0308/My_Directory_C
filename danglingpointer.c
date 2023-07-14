#include <stdio.h>
int *func()
{
    static int a=10;
    return &a;
}

int main()
{
    int *ptr = func();
    printf("%d", *ptr);
    return 0;
}
