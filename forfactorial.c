#include<stdio.h>
int main()
{
   int a,c=1;
    printf("Enter the number you want factorial of\n");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        
        c=c*i;
        

    }
    printf("factorisl of %d is %d",a,c);
    return 0;
}

