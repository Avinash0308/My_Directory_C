#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    float pi=3.14,theta;
    double r,z;
    printf("enter the cordinates of point\n");
    scanf("%f",&x);
    scanf("%f",&y);
    printf("We have to find the polar co-ordinates of point (%f,%f)\n",x,y);
    printf("Which are represented by point (r,0)\n");
    z=(x*x+y*y);
    r=sqrt(z);
    theta = atan(x/y);
    theta=theta*(180/pi);
    printf("The polar co-ordinates of the point is (%f,%f)\n",r,theta);
    return 0;
}

