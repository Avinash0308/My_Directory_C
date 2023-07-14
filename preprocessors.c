#include <stdio.h>
#include <string.h>
#define PI 3.14
#define diameter(r) 2 * r
int main()
{
    int s;
    printf("Today's date is %s\n", __DATE__);
    printf("The curren time is %s\n", __TIME__);
    printf("The compiler is compiling with the ansi : %d\n", __STDC__);
    printf("The curren line is %d\n", __LINE__);
    printf("The curren file is %s\n", __FILE__);
    printf("Please enter the radius of the circle \n");
    scanf("%d", &s);

    printf("The diameter of the circle is %d\n", diameter(s));
    printf("And the perimeter of the circle is %f\n", PI * diameter(s) );
    #undef diameter
    int diameter = 3;
    printf("The new diameter is %d",diameter);
}