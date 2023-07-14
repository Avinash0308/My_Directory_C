#include <stdio.h>
int main()
{
    printf("\n\n\n\n\n\n\n\n");
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 85; j++)
        {
            if (i == 4 && ((j >= 4 && j <= 10) || (j >= 48 && j <= 54) || (j >= 59 && j <= 71) || (j >= 73 && j <= 85)))
            {
                printf("*");
            }
            else if (j == 29 || j == 31 || j == 43 || j == 73 || j == 85)
            {
                printf("*");
            }
            else if (i + j == 8 || i + j == 28 || i + j == 52)
            {
                printf("*");
            }
            else if (j - i == 6 || j - i == 14 || j - i == 50)
            {
                printf("*");
            }
            else if (j - 2 * i == 29)
            {
                printf("*");
            }
            else if ((i == 1 && (j >= 59 && j <= 71)) || (i == 7 && (j >= 59 && j <= 71)))
            {
                printf("*");
            }
            else if (((i >= 1 && i <= 4) && j == 59) || ((i >= 5 && i <= 7) && j == 71))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n\n\n\n\n\n");
    return 0;
}
