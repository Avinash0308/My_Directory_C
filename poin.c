#include <stdio.h>
int main()
{
    char a = '3';
    char *poina = &a;
    printf("%d\n", &poina);
    printf("%d\n", &poina + 1);
    printf("%d\n", &poina + 2);
    printf("%d\n", poina);
    printf("%d\n", poina + 1);
    printf("%d\n", poina + 2);
    printf("%p\n", &poina);
    printf("%p\n", &poina + 1);
    printf("%p\n", &poina + 2);
    printf("%p\n", poina);
    printf("%p\n", poina + 1);
    printf("%p\n", poina + 2);\
    printf("%x\n", &poina);
    printf("%x\n", &poina + 1);
    printf("%x\n", &poina + 2);
    printf("%x\n", poina);
    printf("%x\n", poina + 1);
    printf("%x\n", poina + 2);
    return 0;