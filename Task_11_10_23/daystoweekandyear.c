//program to convert days in to week and year
#include <stdio.h>

int main()
{
    int given_days,week,year,remaining_days;
    printf("Enter the number of days::");
    scanf("%d",&given_days);
    if(given_days < 7)
        week = 0;
    else
        week = given_days / 7;
    if((week * 7) < given_days)
        remaining_days = given_days - (week * 7);
    if(given_days >= 365)
        year = given_days / 365;
    else
        year = 0;
    printf("Days are :: %d\nWeeks are :: %d,\nYears are :: %d",remaining_days,week,year);
    return(0);
}
