//Code for finding area and perimeter of given structures
#include<stdio.h>
int main()
{
    int a,b;
    float pie=3.14;
    printf("Length of rectangle and radius of circle\n");
    scanf("%d",&a);
    printf("Breadth of rectangle\n");
    scanf("%d",&b);
    printf("Area of rectangle %d\n",a*b);
    printf("Perimeter of rectangle %d\n",2*(a+b));
    printf("Area of circle %f\n",pie*a*a );
    printf("Perimeter of circle %f\n", 2*pie*a);
    return 0;
}
