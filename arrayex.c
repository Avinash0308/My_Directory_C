#include<stdio.h>
void arrrev(int *arr, int i);
int main()
{
    int arr[100],i=0;
    printf("Please enter the numbers you want to put in your array\n(Please type 10001 when your list is done)\n");
    while (1)
    {
        
        scanf("%d",&arr[i]);
        if (arr[i]==10001)
        {
            goto exit;
        }
        i++;
    }
    exit:
    printf("\n\nYou have formed the array of %d numbers and it consists \n{ ",i);
    for (int j = 0; j < i; j++)
    {
        printf("%d , ",arr[j]);
    }
    printf("}\n\n");
    printf("The reverse array from your one is\n");
    arrrev(arr,i);
    printf("{");
    for (int j = 0; j < i; j++)
    {
        printf("%d , ",arr[j]);
    }
    printf("}");
    
    return 0;
}
void arrrev(int *arr, int i)
{
    int mr;
  
    for (int k = 0; k<=i/2; k++)
    {
        mr=*(arr+k);
        *(arr+k)=*(arr+i-1-k);
        *(arr+i-1-k)=mr;
        
    }
   
}