#include <stdio.h>
void toh(int number, char from, char help, char to);
int main()
{
    int num;
    printf("Enter the number of disks used\n");
    scanf("%d", &num);
    printf("Moves involved in solving the problems are:\n");
    toh(num, 'a', 'b', 'c');
    return 0;
}
void toh(int num, char from, char help, char to)
{
    if (num == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", from, to);
        return;
    }
    toh(num - 1, from, to, help);
    printf("Move disk %d from rod %c to rod %c\n", num, from, to);
    toh(num - 1, help, from, to);
}
