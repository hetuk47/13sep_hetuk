#include <stdio.h>

int main()
{
    int year;
    printf("Pleasr Enter the year to check for leap year::");
    scanf("%d",&year);
    if(year % 4 == 0)
        printf("\n%d year is a leap year",year);
    else
        printf("\n%d year is not a leap year",year);
    return(0);
}
