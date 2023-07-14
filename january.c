#include<stdio.h>
int main()
{
    int year,basic_year=1900,years,leap_year,common_year,total_days,remaining_days;
    printf("According to georgian calendar it was monday on date 01/01/01\n");
    printf(" If you want to know what will be the day on 1st Jan of any other year \nPlease type the year\n");
    printf("(Year must not be below 1900)\nAlso , Year 1900 is considered leap year\n");
    scanf("%d",&year);
    years=year-basic_year-1;//Total years between given two years
    leap_year=(years)/4;//no of leap years
    common_year=years-leap_year;//no. of common years
    total_days=365*common_year+366*leap_year+1;
    remaining_days=total_days%7;
    switch (remaining_days)
    {
    case 0:
        printf("It's a MONDAY");
        break;
    case 1:
        printf("It's a TUESDAY");
        break;
    case 2:
        printf("It's a WEDNESDAY");
        break;
    case 3:
        printf("It's a THURSDAY");
        break;
    case 4:
        printf("It's a FRIDAY");
        break;
    case 5:
        printf("It's a SATURDAY");
        break;
    case 6:
        printf("It's a SUNDAY");
        break;
    
    
    }
    
    return 0;
}
