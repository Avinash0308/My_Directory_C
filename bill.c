#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replace(char *str, char *oldword, char *newword)
{
    char *resultstring;
    int count = 0, i;
    int newwordlength = strlen(newword);
    int oldwordlength = strlen(oldword);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;
            i = i + oldwordlength - 1;
        }
    }

    resultstring = (char *)malloc(i + count * (oldwordlength - newwordlength) + 1);

    i = 0;

    while (*str)
    {
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultstring[i], newword);
            i = i + newwordlength;
            str = str + oldwordlength;
        }

        else
        {
            resultstring[i] = *str;
            i++;
            str++;
        }
    }

    resultstring[i] = '\0';
    return resultstring;
}

int main()
{
    char name[30];
    char item[20];
    char outlet[20];
    char str[200];
    char *newptr;

    printf("\nPlease tell me your name \n");
    gets(name);

    printf("\nNow tell me what you have purchased\n");
    gets(item);

    printf("\nOk , one more thing , from where you have purchased the %s\n", item);
    gets(outlet);

    printf("The inputed informations are\n");
    printf("\nName : ");
    puts(name);

    printf("\nItem purchased : ");
    puts(item);

    printf("\nOutlet : ");
    puts(outlet);

    FILE *ptr = NULL;
    ptr = fopen("work.txt", "r");

    fgets(str, 200, ptr);
    printf("\n\nThe given bill template was : %s\n", str);

    FILE *ptr2 = NULL;
    ptr2 = fopen("genbill.txt", "w");

    newptr = replace(str, "{{name}}", name);
    newptr = replace(newptr, "{{item}}", item);
    newptr = replace(newptr, "{{outlet}}", outlet);

    fprintf(ptr2, "%s", newptr);

    printf("\n\nThe bill template now is : %s\n", newptr);

    fclose(ptr);
    fclose(ptr2);
    return 0;
}