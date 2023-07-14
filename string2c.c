#include<stdio.h>
#include<string.h>
int main()
{
    char my[]="my";
    char ny[]="name";
    char s4 [23];
    puts(strcat(ny,my));
    printf("%s\n",strcat(ny,my));
    
    printf("%d\n",strlen("hello"));
    printf("%d\n",strlen(ny));
    
    puts(strrev(ny));
    
    // strcpy(s4,strcat(ny,my));
    // puts(s4);
    printf("%d\n",strcmp(my,ny));
    // strcmp()
    // puts(strcat("my","ny"));
    // return 0;
}