#include<stdio.h>
int main()
{
    int marks[10],sum=0;//DEclaration of an array
    printf("Enter the marks obtained by 10 student one by one \n");
    for (int  i= 0;  i<10 ; i++)
    {
        printf("Enter the marks obtained by student  %d\n",i+1);
        scanf("%d",&marks[i]);//initialization of an array
    }
    
    for (int  i= 0;  i<10 ; i++)
    {
        sum=sum+marks[i];
    }
    printf("Average marks obtained is %f\n",(float)sum/10);
    return 0;
}

