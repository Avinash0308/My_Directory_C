#include<stdio.h>
int main()
{
    int number,sum=0,n;
    printf("Enter the five digit number\n");
    scanf("%d",&number);
    
    for ( int i = 0; i<5; i++)
    {
        n = number % 10;
        number = number / 10;
        sum = sum + n;
    }
    printf("Sum: %d",sum);
    

    return 0;
}
