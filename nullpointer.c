#include<stdio.h>
int main()
{
    int x=10;
    int * ptr;
    int b =3;
    ptr = &x;
    if (ptr!=NULL)
    {
    printf("The value is %d\n",*ptr );
        
    }
    else
    {
        printf("The given pointer is assigned a value NULL and cannot be derefrenced\n");
    }
    
    
    return 0;
}