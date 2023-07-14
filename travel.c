#include <stdio.h>
#include <string.h>
int main()
{
    printf("Hello all the drivers ,\nYou all have to fill some of your details asked here , so we can maintain your details .");
    struct travel
    {
        char name[30];
        char driving_lisence[10];
        char route[50];
        int distance;
    } driver_1, driver_2, driver_3;

    printf("\n\n\nDriver_1 , Please tell me your name : ");
    scanf("%s", &driver_1.name);
    printf("\n\nNow tell me your 10 digit driving license number : ");
    scanf("%s", &driver_1.driving_lisence);
    printf("\n\nIn which route do you give your service : ");
    scanf("%s", &driver_1.route);
    printf("\n\nAlso estimated distance you have traversed yet : ");
    scanf("%d", &driver_1.distance);

    printf("\n\n\nDriver_2 , Please tell me your name : ");
    scanf("%s", &driver_2.name);
    printf("\n\nNow tell me your 10 digit driving license number : ");
    scanf("%s", &driver_2.driving_lisence);
    printf("\n\nIn which route do you give your service : ");
    scanf("%s", &driver_2.route);
    printf("\n\nAlso estimated distance you have traversed yet : ");
    scanf("%d", &driver_2.distance);

    printf("\n\n\nDriver_3 , Please tell me your name : ");
    scanf("%s", &driver_3.name);
    printf("\n\nNow tell me your 10 digit driving license number : ");
    scanf("%s", &driver_3.driving_lisence);
    printf("\n\nIn which route do you give your service : ");
    scanf("%s", &driver_3.route);
    printf("\n\nAlso estimated distance you have traversed yet : ");
    scanf("%d", &driver_3.distance);

    printf("\n\n\n\nThe details inputed by all three drivers are ");

    printf("\n\nFor driver_1 :-\n\n");
    printf("Name : ");
    puts(driver_1.name);
    printf("\n\nDriving lisence number : ");
    puts(driver_1.driving_lisence);

    printf("\n\nRoute : ");
    puts(driver_1.route);

    printf("\n\nDistance travelled : %d", driver_1.distance);

    printf("\n\nFor driver_2 :-\n\n");
    printf("Name : ");
    puts(driver_2.name);
    printf("\n\nDriving lisence number : ");
    puts(driver_2.driving_lisence);

    printf("\n\nRoute : ");
    puts(driver_2.route);

    printf("\n\nDistance travelled : ");
    printf("\n\nDistance travelled : %d", driver_2.distance);

    printf("\n\nFor driver_3 :-\n\n");
    printf("Name : ");
    puts(driver_3.name);
    printf("\n\nDriving lisence number : ");
    puts(driver_3.driving_lisence);

    printf("\n\nRoute : ");
    puts(driver_3.route);

    printf("\n\nDistance travelled : ");
    printf("\n\nDistance travelled : %d", driver_3.distance);

    return 0;
}