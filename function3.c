//This is a code to define functions without arguments and with return value
#include<stdio.h>
int age();//Declare
int main()
{
    int b;
    printf("This is a age calculator\n");
    b=age();//Call
    printf("Your age is %d",b);
    return 0;
}

int age()//Define
{
    int a,c;
    printf("Enter the year you born\n");
    scanf("%d",&a);
    c=2021-a;
    return c;
}