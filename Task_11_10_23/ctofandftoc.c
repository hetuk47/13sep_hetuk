//program to convert 'c to 'f and 'f to 'c
#include <stdio.h>

int main()
{
    float c,f,ctof,ftoc;
    printf("Enter tempreture in celcious::");
    scanf("%f",&c);
    ctof = (c*(9/5)) + 32;
    printf("\nEnter teprature in Fernhit::");
    scanf("%f",&f);
    ftoc = ((f-32)*5)/9;
    printf("\nAfter Converting from 'c is %f and 'f is %f",c,ctof);
    printf("\nAfter Converting from 'f is %f and 'c is %f",f,ftoc);
    return(0);
}
