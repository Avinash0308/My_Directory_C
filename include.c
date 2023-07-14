#include<stdio.h>
#include"intchar.c"
int main()
{
    printf("Please enter the value one by one\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("\nYou have given these values\n");
    printf("a : %d\nb : %d\nc : %d\nd : %d\n",a,b,c,d);
}