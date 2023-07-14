#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    for (int i = 0; i < 5; i++)
    {
        printf("The number is %d\n",i);
        if (a==1)
        {
            printf("you are right \n");
            goto end;
            printf("You are wrong \n");
        }
        
    }
    printf("It is good ton hearthat you are right\n");

    end:
    return 0;
}

