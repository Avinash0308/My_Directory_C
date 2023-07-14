#include<stdio.h>
int main()
{
    float a;
    printf("Ramesh's basic salary is (IN RS)\n");
    scanf("%f",&a);
    printf("Ramesh is getting additional 40 percent of his salary as dearness allowance which makes his total salary %f\n", a+40*a/100);
    printf("Company is providing him with 20 percent of his salry as house rent allowance\n");        
    printf("Thus total salary of Ramesh is summing uoto %f\n", a+40*a/100 +20*a/100);        
    return 0;
}
