#include <stdio.h>
int main()
{
    int marks[2][5];
    printf("Enter the marks obtained by 5 students in 2 subjects\n");
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("enter the marks obtained by student %d in subject %d\n", j + 1, i + 1);
            scanf("%d", &marks[i][j]);
            printf("Marks obtained by student %d in subject %d is %d\n", j + 1, i + 1, marks[i][j]);
        }
        printf("\n");
    }
    for (int j = 0; j < 5; j++)
    {
        printf("Total marks obtained by student %d is %d\n", j + 1, marks[0][j] + marks[1][j]);
    }
    return 0;
}
