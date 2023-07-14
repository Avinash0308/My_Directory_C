#include <stdio.h>
int main()
{
    void *my;
    int a = 3;
    float b = 3.3;
    char c = 'a';
    my = &a;
    printf("The value of a is %d\n", *((int *)(my)));
    my = &b;
    printf("The value of b is %f\n", *((float *)(my)));
    my = &c;
    printf("The value of c is %c\n", *((char *)(my)));

    return 0;
}