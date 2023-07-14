#include<stdio.h>
int main()
{
    float a,b;
    printf("enter the total selling price of all the products\n");
    scanf("%f",&a);
    printf("Enter the value of profit earned\n");
    scanf("%f",&b);
    printf("The cost price of all the products is %f\n",a-b);
    printf("Cost price of each product is %f\n",(a-b)/15);


    return 0;
}
