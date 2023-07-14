#include<stdio.h>
void givemetheaddress(int * ant)
{
    printf("The location where it gets saved is %d\n",ant);
}

int main()
{
    int a;
    printf("in this file i am going to tell you about tpypedf\n");
    printf("Please type any number and i will give you the location where it get saved\n");
    scanf("%d",&a);
    givemetheaddress(&a);
    return 0;
}