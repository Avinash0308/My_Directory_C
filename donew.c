// code to find all odd numbers between user input numbers
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers between which you want to find even numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);

    do
    {
       printf("%d\n",((a+1)/2)*2);
       a=a+1;
    } while (a<b-1);
    
    return 0;
}
