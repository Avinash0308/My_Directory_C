#include<stdio.h>
int main()
{
    int a,b=0,c=1,d;
    printf("Enter the number you want fabonicci value of\n");
    scanf("%d",&a);
    if (a==0)
    {
        printf("Fabonicci value of 0 is 0\n");
        goto end;
    }
    if (a==1)
    {
        printf("Fabonicci value of 1 is 1\n");
        goto end;
    }
    for (int i = 2; i <= a; i++)
    {
        d=b+c;
        b=c;
        c=d;
    }
    printf("Fabonicci value of %d is %d",a,d);
    end :
    return 0;
}

