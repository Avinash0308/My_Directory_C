#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,a1,a2,a3,a4,a5,a6;
    printf("Enter the amount\n");
    scanf("%d",&a);
    a1=a/100;
    a2=a1/50;
    a3=a2/10;
    a4=a3/5;
    a5=a4/2;
    a6=a5/1;
    printf("Minimum number of noteds required is %d",a1+a2+a3+a4+a5+a6);
    return 0;
}

