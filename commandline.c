#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char *a;
    a = argv[1];
    int b = atoi(argv[2]), c = atoi(argv[3]);
    if (strcmp(a, "add") == 0)
    {
        printf("%d\n", b + c);
    }
    if (strcmp(a, "subtract") == 0)
    {
        printf("%d\n", b - c);
    }
    if (strcmp(a, "multiply") == 0)
    {
        printf("%d\n", b * c);
    }
    if (strcmp(a, "divide") == 0)
    {
        printf("%d\n", b / c);
    }
    else
    {
        printf("Hat Bewkoof");
    }
    

    return 0;
}
