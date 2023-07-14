#include<stdio.h>
int main()
{
    int a=33;
    int *p ;//This is a wild pointer
    p = &a;//Now the pointer is not wild
    *p=32;
    printf("The value at address stored at pointer p is %d\n",*p);
    return 0;
}