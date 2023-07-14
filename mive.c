// understanding the use of if else statements
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d",&age);
    printf("Your age is %d ",&age);
    if (age >= 18)
    {
        printf("/n So You can vote");
    }
    else if (age>=10)
    {
        printf("/n and it is between 10 to 18 \nso you can vote only for minors");
    }
    else if (age>=3)
    {
        printf("/n and it is between 3 to 10 \nso you can vote for childrens\n" );
        printf("but your vote will be of half importance \a");
    }
    else
    {
          printf("\n You cannot vote");
    }
    return 0;
}
