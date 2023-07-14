#include <stdio.h>
int main()
{
    int distance, choice;
    printf("Enter the distance (in km ) you want to convert\n ");
    scanf("%d", &distance);
    printf("IN which form do you want to change the distance entered\n");
    printf("1 : in meters\n");
    printf("2 : in feet\n");
    printf("3 : in inches\n");
    printf("4 : in centimeters\n");
    printf("5 : quit the program\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("%d km in meters \n%d m", distance, distance * 1000);
        break;
    case 2:
        printf("%d km in feets \n%d feet", distance, distance * 3280);
        break;
    case 3:
        printf("%d km in inches \n%d", distance, distance * 39370);
        break;
    case 4:
        printf("%d km in centimeters \n%d", distance, distance * 100000);
    case 5:
        printf("Quitting the program !!!!!!!!!\n");
        goto end;

    default:
        printf("You have given wrong input\n");
        break;
    }

end:
    return 0;
}
