/*
This is Module 1 of assignment
Display Name, Date of birth, Age and Address using printf
Created on 16-09-2023
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char Name[10],Address[100];
    int Age,dd,mm,yyyy,date;



    printf("\nPlease Enter the name:: \n");
    scanf("%s",&Name);
    printf("\nPlease enter the Age:: \n");
    scanf("%d",&Age);
    printf("\nEnter your Birth date in DD/MM/YYY format\n");
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    printf("\nPlease Enter Address:: \n");
    fflush(stdin);
    gets(Address);
    printf("\nThe Name is %s \nThe Age is %d \nThe birth date is %02d/%02d/%02d \nThe Address is %s \n",Name,Age,dd,mm,yyyy,Address);
    return(0);
}
