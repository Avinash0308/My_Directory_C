#include<stdio.h>
#include<math.h>
int main()
{
    float angle;
    float a,b;
    printf("Enter the measurements of angles in degees\n");
    scanf("%d",&angle);
    a = sin angle;
    b = cos angle;
    printf("Value of sine aquare angle + cosine square angle is %d\n",a*a+b*b);
   return 0;
}












