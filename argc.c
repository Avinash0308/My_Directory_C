#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char *operation;
    operation = argv[1];
    int a, b;
    a = atoi(argv[2]);
    b = atoi(argv[3]);

    printf("The operation is %s\n", operation);
    printf("The value 1 is %d\n", a);
    printf("The value 2 is %d\n", b);

    if (strcmp(operation, "add") == 0)
    {
        printf("The sum of the values is %d\n", a + b);
    }
    if (strcmp(operation, "subtract") == 0)
    {
        printf("The sum of the values is %d\n", a - b);
    }
    if (strcmp(operation, "multiply") == 0)
    {
        printf("The sum of the values is %d\n", a * b);
    }
    if (strcmp(operation, "divide") == 0)
    {
        printf("The sum of the values is %f\n", (float)a / b);
    }

    return 0;
}