//This code is to find fabonacci value of entered number 
// Basics Fabonicci value of 0 is 0 and for 1 it is 1
// Fn=Fn-1 + Fn-2
#include<stdio.h>
int fabonicci(int number)
{
    if (number == 0)
    {
        return 0;
    }
    if (number == 1)
    {
        
        return 1;
    }
    else
    {
        return (fabonicci(number-1)+fabonicci(number-2));
    }
    
    
}
int main()
{
    int number;
    printf("Enter the number you want fabonicci value of\n");
    scanf("%d",&number);
    printf("Fabonicci value of %d is %d\n",number,fabonicci(number));
    return 0;
}

