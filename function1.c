//This is a code to define functions with arguments and return value
#include<stdio.h>
int multiply(int a , int b);// Function is declared here 
int main()
{
    int a,b,c;
    printf("Enter the number a\n");
    scanf("%d",&a);
    printf("Enter the number b\n");
    scanf("%d",&b);
    c = multiply(a,b);// Function is called here
    printf("The product of %d and %d is %d\n",a,b,c);
    return 0;
}

int multiply(int a , int b)//Function is defined here
{
    return a*b;
}