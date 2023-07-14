#include <stdio.h>

#include "intchar.c"
int palindrome(int a)
{
    c = a;
    b = 0;
    while (a != 0)
    {
        b = b * 10 + a % 10;
        a = a / 10;
    }
    if (c == b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("Please enter the number you want to check\n\n");
    scanf("%d", &a);
    if (palindrome(a) == 1)
    {
        printf("Yes, %d is a palindrome\n", a);
    }
    else
    {
        printf("The number %d is not a palindrome \n", a);
    }

    return 0;
}