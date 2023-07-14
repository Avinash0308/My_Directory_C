#include <stdio.h>
int main()
{
    int a, b, c, d;
    int r = 0;

    printf("\n\nPlease tell me the number of rows and column in your matrix 1.\n\n");
    printf("Number of rows in matrix 1 is : ");
    scanf("%d", &a);
    printf("Number of columns in matrix 1 is : ");
    scanf("%d", &b);
    int trix[a][b];
    printf("\n\nPlease input all the elements of the matrix 1: \n\n");
    for (int g = 0; g < a; g++)
    {
        for (int h = 0; h < b; h++)
        {
            printf("The value (%d , %d) is : ", g + 1, h + 1);
            scanf("%d", &trix[g][h]);
        }
    }
    printf("\nThe inputed matrix 1 is \n{\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", trix[i][j]);
        }
        printf("\n");
    }
    printf("\n}\n\n");

    printf("\n\nPlease tell me the number of rows and column in your matrix 2.\n\n");
    printf("Number of rows in matrix 2 is : ");
    scanf("%d", &c);
    printf("Number of columns in matrix 2 is : ");
    scanf("%d", &d);
    int trix1[c][d];
    printf("\n\nPlease input all the elements of the matrix 2: \n\n");
    for (int g = 0; g < c; g++)
    {
        for (int h = 0; h < d; h++)
        {
            printf("The value (%d , %d) is : ", g + 1, h + 1);
            scanf("%d", &trix1[g][h]);
        }
    }
    printf("\nThe inputed matrix 2 is \n{\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("%d ", trix1[i][j]);
        }
        printf("\n");
    }
    printf("\n}\n\n");

    int trix2[a][d];
    if (b == c)
    {
        for (int i = 0; i < a; i++) //i=a
        {
            for (int y = 0; y < d; y++)
            {
                for (int j = 0, z = 0; j < b, z < c; j++, z++) //j=b z=c
                {
                    r = r + trix[i][j] * trix1[z][y];
                }
                trix2[i][y] = r;
                r=0;
            }
        }
    }
    else
    {
        printf("The given matrix cannot be multiplied\n\n");
        goto end;
    }
    printf("The matrix formed after the multiplication is \n{\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("%d ", trix2[i][j]);
        }
        printf("\n");
    }
    printf("\n}\n\n");
end:
    return 0;
}