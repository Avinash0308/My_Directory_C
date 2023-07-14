#include <stdio.h>
#include <string.h>
int main()
{
    char str[34];
    FILE *ptr = NULL;
    ptr = fopen("work.txt", "r+");
    // fscanf(ptr , "%s" , str);
    // printf("%s\n",str);
    // char c = fgetc(ptr);
    // printf("The character is %c\n",c);
    //  c = fgetc(ptr);
    // printf("The character is %c\n",c);
    // c = fgetc(ptr);
    // printf("The character is %c\n",c);
    // c = fgetc(ptr);
    // printf("The character is %c\n",c);
    // c = fgetc(ptr);
    // printf("The character is %c\n",c);
    // c = fgetc(ptr);
    // printf("The character is %c\n",c);

    // char str[34] ;
    // fgets(str , 10, ptr);
    // printf("The string is %s\n",str);
    // fputc('a', ptr);
    // fputs("hello my name is avinash agrawal" , ptr);
    fclose(ptr);
    return 0;
}