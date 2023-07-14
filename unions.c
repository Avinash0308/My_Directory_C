#include <stdio.h>
#include <string.h>

union myself
{
    int age;
    char name[38];
    float weight;
} avi;
int main()
{
    avi.age = 18;
    printf("My age is %d\n", avi.age);
    avi.weight = 84.5;
    printf("and My weight is %f\n", avi.weight);
    strcpy(avi.name, "avinash agrawal");
    printf("My name is %s\n", avi.name);
    return 0;
}