#include<stdio.h>
#include<string.h>
int main()
{
    FILE * ptr = NULL;
    char string[234] ="HelloMyNameIsAvinashAgrawalAndYouAllHeardItRigt";
    // For reading the files
    // ptr = fopen("avi.txt","r");
    // fscanf(ptr , "%s", string);
    // printf("The content of this file has ");
    // puts(string);
    // // For writing a file
    // ptr = fopen("avi.txt","a");
    // printf("The content of this file has been added by a text file and now the contents of the avi file is \n\n");
    // fprintf(ptr , "%s", string);


    // ptr = fopen("avi.txt","r");
    // fscanf(ptr,"%s",string);
    // puts(string);
    ptr=fopen("avi.txt","w");
    fprintf(ptr,"%s",string);
    return 0;
}