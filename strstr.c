#include <stdio.h>
#include <string.h>
int main()
{
    char found[100];
    char str1[] = "My name is XYZ";
    char str2[] = "name";
    
    // printf("%d\n", found - str1);
    printf("%s",strstr(str1, str2));
    return 0;
}