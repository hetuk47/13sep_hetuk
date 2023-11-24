#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20],str2[20],*cocat;
    printf("Enter First String::");
    fflush(stdin);
    gets(str1);
    printf("\nEnter Second String::");
    fflush(stdin);
    gets(str2);
    cocat = strcat(str1,str2);
    printf("\nAfter Cocating both strings using pointer::%s",cocat);
    return(0);
}
