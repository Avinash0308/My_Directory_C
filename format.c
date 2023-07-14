// Defining how to work under %f format specifier
#include<stdio.h>
int main()
{
    int a=5;
    float b=5.65;
   
    printf("Sum of %d and %f is %26.22f ",a,b,a+b);
    return 0;
}
