// Code showing the usage of switch statement
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age here\n");
    scanf("%d",&age);
    switch (age)
    {
    case 12:
        printf("You are eligible for qualifying in test and examination");
        break;
    case 21:
        printf("You are eligiblez for qualifying in test and examination just for this year");
        break;
    case 31:
        printf("You are not eligible for qualifying in test and examination");
        break;
    
    default:
        printf("As your age dosent matched any of the above numbers you are consuidered overaged");
        break;
    }


    return 0;
}
