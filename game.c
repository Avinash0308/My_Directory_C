// This is my best program i have written till the date
#include <stdio.h>
// #include <string.h>
#include <time.h>
#include <stdlib.h>
// #include <conio.h>
int we()
{
    srand(time(NULL));
    return rand() % 3;
}
int main()
{
    int a;
    int c = 0, d = 0, b;
    printf("Welcome to the Paper, Rock , Scissors game guys\nI think you know this game very well so directly coming to the topic : \n\n\n");
    printf("Firstly tell me how many times do you love to play the game : ");
    scanf("%d", &a);
    getchar();
    printf("Type p for paper , s for scissor , r for rock\n\n");
    printf("\n\n\nOK , let's gets started\n\nFirstly,");
    char arr;
    while (a > 0)
    {
        printf("\n\nYour turn : ");
        scanf("%c", &arr);
        getchar();

        printf("\nComputer's turn : ");
        b = we();
        if (b == 0)
        {
            printf("Scissor\n\n");
        }
        if (b == 1)
        {
            printf("Rock\n\n");
        }
        if (b == 2)
        {
            printf("Paper\n\n");
        }
        if ((arr == 'r' && b == 2) || (arr == 's' && b == 1) || (arr == 'p' && b == 0))
        {
            d++;
        }
        if ((arr == 'r' && b == 0) || (arr == 's' && b == 2) || (arr == 'p' && b == 1))
        {
            c++;
        }
        if ((arr == 'r' && b == 1) || (arr == 's' && b == 0) || (arr == 'p' && b == 2))
        {
            c++;
            d++;
        }
        a--;
    }

    if (c > d)
    {
        printf("\n\nYou won the game , hurraay!!!!!\n\n");
        printf("You have earned total %d points & computer's won only %d points\n\n", c, d);
    }
    if (c < d)
    {
        printf("\n\nYou lost the game , ahhh!!!!!\n\n");
        printf("You have earned only %d points\n\nCOMPUTER earns %d points & WON THE GAME\n\n\n", c, d);
    }
    if (c == d)
    {
        printf("\n\nWoW!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\nWhat a close callls \nIt's a tie \n\nYou both earned %d points\n\n", c);
    }

    return 0;
}
