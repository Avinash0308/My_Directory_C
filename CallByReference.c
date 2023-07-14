#include<stdio.h>
int changeit(int* x, int* y);
int main()
{
    int a,b;
    printf("Please enter the values of a and b\n");
    scanf("%d %d",&a,&b);
    printf("The values are :\na=%d\nb=%d\n",a,b);
    changeit(&a,&b);
    printf("The new values are :\na=%d\nb=%d\n",a,b);

    return 0;
}
int changeit(int* x, int* y)
{
    int a;
    a=*x;
    *x=a-*y;
    *y=a+*y;
     return 0;
}