#include <stdio.h>

int average(int a, int b)
{
    return (a + b) / 2;
}

void GreetGoodMorning(int (*ptr)(int, int))
{
    printf("Hello USer good morning\n ");
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("The averrage of %d and %d is %d\n",a,b, ptr(a, b));
}
void GreetGoodEvening(int (*ptr)(int, int))
{
    printf("Hello USer good evening\n ");
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("The averrage of %d and %d is %d\n",a,b, ptr(a, b));
}

int main()
{

    int (*ptr)(int, int);
    ptr = average;
    GreetGoodMorning(ptr);
    GreetGoodEvening(ptr);

    return 0;
}