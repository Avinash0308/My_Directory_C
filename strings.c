#include <stdio.h>
void print(char name[])
{
    int i = 0;
    while (name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    printf("My name is avinash agrawal\nAnd i am going to print my name in some different way\n");
    char name[] = {'a', 'v', 'i', 'n', 'a', 's', 'h', '\0'};
    char my[] = "avinash agrawal";
    printf("Please enter whatever you want to \n");
    gets(name);
    puts(name);
    print(name);
    printf("%s", my);
    return 0;
}