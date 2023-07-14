#include<stdio.h>
int main()
{
    int number,i,r,s=0;
    printf("Enter the five digit number you want the reverse of\n");
    scanf("%d",&number);
    while(number!=0)
    {
    r=number%10;
    s=s*10+r;
    number=number/10;
    }
printf("The reverse of the number entered is %d\n",s);
    return 0;
}
