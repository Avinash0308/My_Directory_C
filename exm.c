#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s;
    double prearea;
    double area;
    printf("Enter the values of all three sides of triangle\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    s=(a+b+c)/2;
    prearea=s*(s-a)*(s-b)*(s-c);
    area=sqrt(prearea);
    if ((a+b)<c)
    {
        printf("You have given the wrong input\n");
    }
    else if ((b+c)<a)
    {
        printf("You have given the wrong input\n");
    }
    else if ((a+c)<b)
    {
        printf("You have given the wrong input\n");
    }
    else
    {
        printf("The area of triangle is %f\n",area);
    }
    return 0;
}
