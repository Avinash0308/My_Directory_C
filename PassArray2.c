#include<stdio.h>
void arr(int* ptr);
int main()
{
    int array[]={34,43,2,3,2};
    printf("Let me check whether i can change the values or not\n");
    for ( int i = 0; i < 5; i++)
    {
        printf("The current value %d is : %d \n",i+1,array[i]);
    }
    arr(array);
    printf("\n");
    for ( int f = 0; f < 5; f++)
    {
        printf("now the value %d is : %d \n",f+1,array[f]);
    }
    return 0;
}
void arr(int* ptr)
{
    printf("Enter the values \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",ptr+i);
    }
    
}