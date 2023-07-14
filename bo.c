/*Code for defining bitwise operators */
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value a\n");
    scanf("%d",&a);
    printf("Enter value b\n");
    scanf("%d",&b);
    printf("a&b is %d\n",a&b);
    printf("a|b is %d\n",a|b);
    printf("a^b is %d\n",a^b);
    printf("b^a is %d\n",b^a);
    return 0;
}
