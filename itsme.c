#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,b;
    printf("Enter the cost price of the product\n");
    scanf("%f",&a);
    printf("Enter the selling price of the product\n");
    scanf("%f",&b);
    if (a>b)
    {
        printf("Seller have a loss of %.2f percent",((a-b)/a)*100);

    }
    if (a<b)
    {
        printf("Seller had made a profit of %.2f percent",((b-a)/a)*100);
    }
    
    
    return 0;
}
