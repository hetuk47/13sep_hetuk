#include <stdio.h>

int reversenumber(int num);

int main()
{
    int number,revnum;
    printf("Enter the number to check pandulam number::");
    scanf("%d",&number);
    revnum = reversenumber(number);
    if(number == revnum)
        printf("\nGiven number %d is pandulam number",number);
    else
        printf("\nGiven number %d is not pandulam number",number);
    return(0);
}


int reversenumber(int number)
{
    int revnum = 0;
    while(number > 0)
    {
        int reminder = number % 10;
        revnum = revnum * 10 + reminder;
        number = number / 10;
    }
    return(revnum);
}
