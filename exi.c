#include<stdio.h>
int main()
{
    int a,s,r,sum;
    printf("Enter the number\n");
    scanf("%d",&a);
    s=a%10;
    r=a/1000;
    sum=r+s;
    printf("The sum of first and last digit is %d",sum);

    return 0;
}
