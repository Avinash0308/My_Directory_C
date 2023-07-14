// efect of constant in a code
// There are two ways to define constant 
// first is by using const keyword and second by using define preprocessor commannd
#include<stdio.h>
int main()
// Using preprocessr command
//now using const keyword
#define dhoni 6
{
   // As dhoni is defined as 6 above giving it a new value will throw a error = 6;
    printf("a brilliant shot gone for %d",dhoni);
    return 0;
}