//program to convert feet to meter and meter to feet
#include <stdio.h>

int main()
{
    float feet,meter,ftom,mtof;
    printf("Enter distance in feet::");
    scanf("%f",&feet);
    ftom = feet * 3.2048;
    printf("\nEnter distance in meter::");
    scanf("%f",&meter);
    mtof = 0.3048 * meter;
    printf("\nAfter Converting from feet is %f and meter is %f",feet,ftom);
    printf("\nAfter Converting from meter is %f and feet is %f",meter,mtof);
    return(0);
}
