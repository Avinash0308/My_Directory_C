#include<stdio.h>
int main()
{
    int feeling;
    printf("We are trying here to show that how to nest if statement\n ");
    printf("How are you feeling today\n;");
    printf("1=good\n");
    printf("2=bad\n");
    printf("3=i dont know\n");
    scanf("%d",&feeling);
    if (feeling==1)
    {
        printf("Good to hear you are feeling awesome");
    }
        else {
            if (feeling==2)
        {
            printf("Its bad to hear that your day is not that good");
        }
        else
        {
            printf("I think your day hasnt started yet ahahahaahahh");
        }
        
        }
    
    
    return 0;
}
