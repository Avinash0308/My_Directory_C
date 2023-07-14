// This code will define about function with argument and without return value
#include<stdio.h>
void multiplytable( int );// Declared
int main()
{
    int a;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    multiplytable(a);// Called
    return 0;
}

void multiplytable( int a)//Defined
{
    printf("Multiplication table of %d is .............................................\n",a);
    for (int i = 1; i < 11; i++)
    {
        
        printf("%d X %d = %d\n",a,i,a*i);
    }
    
}