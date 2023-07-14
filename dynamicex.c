#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a,i=1;
    char *eid;
    printf("\n\nHello employees :-\nWe are from ABC Pvt. Ltd.\nWe are asking some of the employees of different company to tell us about there employee id.\nWe will analyse these id to extract some info. about how the id is allocated in different companies\n\n");
while (i!=4)
{
    
    printf("Employee %d can you please tell us , what is the length of your employee id : ",i);
    scanf("%d", &a);
    eid = (char *)calloc(a, sizeof(char));
    printf("\n\nNow , tell me your employee id : ");
    scanf("%s", eid);
    printf("\n\nThanks employee for telling us your eid\nYour inputed employee id is : ");
    printf("%s\n\n\n", eid);
    i++;
    free(eid);
}

    return 0;
}