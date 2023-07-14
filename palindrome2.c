#include <stdio.h>
#include "intchar.c"
#include <string.h>
int main()
{
    printf("Please input the string \n");
    char str[10];
    gets(str);
    char str1[10];
    strcpy(str1, str);
    char rev[10];
    strcpy(rev, strrev(str));
    puts(rev);
    a = strcmp(rev, str1);
    printf("%d\n", a);
    if (a == 0)
    {
        printf("Given number is  a palindrome\n");
    }
    else
    {
        printf("The given number is not a palindrome\n");
    }

    return 0;
}