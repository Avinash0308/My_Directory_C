#include <stdio.h>
#include <string.h>
int main()
{
    char a[29], b[36],* we;
    gets(a);
    puts(a);
    gets(b);
    puts(b);
    we=strstr(a, b);
    printf("%d",we);
    return 0;
}          