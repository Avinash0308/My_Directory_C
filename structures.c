#include <stdio.h>
#include <string.h>
typedef struct students
{
    int id;
    char fav_char;
    int marks;
    char name[39];
} std;
std avi = {2, 'f', 43};

void name()
{
    printf("my name is %s\n", avi.name);
}
int main()

{
    printf("This page will help you on determining what is a structures and how they works\n");
    std nitin = {1, 'a', 35};
    std  anil = {3, 'q', 48};
    nitin.id = 1;
    avi.id = 2;
    anil.id = 3;
    nitin.fav_char = 'a';
    avi.fav_char = 'b';
    anil.fav_char = 's';
    nitin.marks = 35;
    avi.marks = 25;
    anil.marks = 50;
    strcpy(avi.name, "my name is avinash agrawal");
    name();
    printf("\nnitin got %d marks\n", nitin.marks);
    printf("his id is %d\n", nitin.id);
    printf("fav_char is %c\n", nitin.fav_char);
    printf("\navi got %d marks\n", avi.marks);
    printf("his id is %d\n", avi.id);
    printf("fav_char is %c\n", avi.fav_char);
    printf("\nanil got %d marks\n", anil.marks);
    printf("his id is %d\n", anil.id);
    printf("fav_char is %c\n", anil.fav_char);
    return 0;
}