#include <stdio.h>

char *stringcopy(char*);

int main()
{
    char orignalstring[50],*copystring;
    printf("Please enter the string of maxmum 50 charaqcters::\n");
    fflush(stdin);
    gets(orignalstring);
    copystring = stringcopy(orignalstring);
    printf("\n\n");
    printf("\nThe copied string is \n\n%s",copystring);
    return(0);
}

char *stringcopy(char *array)
{
    char *tempstr;
    printf("\n%s",array);
    tempstr = array;
    printf("\n%s",tempstr);
    return(tempstr);
}
