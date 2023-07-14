#include <stdio.h>
void triangular(int x);
void retri(int y);
int main()
{
    while (1)
    {
        int type, num;
        printf("Hello there!\nPlease type \n0. For triangular star pattern or \n1. For reversed triangular star pattern and\n2. For exiting\n");
        scanf("%d", &type);
        if (type == 2)
        {
            goto end;
        }

        printf("Also tell me the number of rows you want to see\n");
        scanf("%d", &num);
        switch (type)
        {
        case 0:
            triangular(num);
            break;
        case 1:
            retri(num);
            break;

        default:
            printf("May god give you power to learn numbers\nGive write input\n");
            break;
        }
    }
end:
    return 0;
}
void triangular(int x)
{
    for (int i = 1; i <=x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
void retri(int y)
{
    for (int i = y; i >=1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}