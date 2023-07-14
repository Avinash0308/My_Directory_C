//This is a code to define function without argument and return value
#include<stdio.h>
void evenodd();//Declared
int main()
{
    printf("This interface will help you in determining whether the number is even or odd\n");
    evenodd();//Called
    return 0;
}
void evenodd()//Defined
{
    int a,b;
    printf("Enter the number here\n");
    scanf("%d",&a);
    b=a%2;
    if (a==0)
    {
        printf("0 is neither odd nor even number\n");
        goto end;
    }
    else
    {
        if (b==0)
        {
            printf("It is a even number\n");
        }
        else
        {
            printf("It is a odd number\n");
        }
            
    }
    end:
    printf("Thank you");   
}

