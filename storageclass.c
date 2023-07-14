#include <stdio.h>
int vi = 4;
int avi() 
{
    extern int vi;
    return vi;
}
// #include "main.c"

int main()
{

    printf("%d", avi());
    return 0;
}