#include <stdio.h>
int array(int arr[5]);
int main()
{
    int arr[5];
    printf("Please enter the values you want sum of \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The sum of given numbers is %d\n",array(arr));

    return 0;
}
int array(int arr[5])
{
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
    }
    return sum;
}