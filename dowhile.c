// Formation of multiplication table using do while loop
#include<stdio.h>
int main()
{
    int a,table=0;
    printf("Enter the number you want multiplication table of\n");
    scanf("%d",&a);
    do
    {
        printf("%d X %d = %d\n",a,table+1,a*(table+1));
        table=table+1;
    } while (table<10);
    
    return 0;
}
