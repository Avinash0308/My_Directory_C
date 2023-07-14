#include<stdio.h>
int main()
{
    char name[29],friend[34],middle[]=" is a friend of ";
    printf("Please enter the your name\n");
    gets(name);
    printf("Please enter your friends name\n");
    gets(friend);
    strcat(friend,middle);
    // strcat(friend,name);d
    printf("%s",strcat(friend,name));

    return 0;
}