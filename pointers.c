#include <stdio.h>
int main()
{
    int a = 23;
    int* poina = &a;
    int* poina2=NULL;
    printf("the value of a is %d\n", *poina);
    printf("the value of a is %d\n", &poina);
    printf("the value of a is %d\n", poina);
    printf("the value of a is %d\n", &a);
    printf("the value of a is %d\n", a);
    printf("the value of a is %f\n", poina2);
    return 0;
}
