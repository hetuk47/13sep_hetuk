#include <stdio.h>

int main()
{
    int number[10],maxnumber;
    printf("Please Enter 10 number for finding out max number::\n");
    for(int i = 0; i < 10; i++)
        scanf("%d",&number[i]);
    maxnumber = number[0];
    for(int j = 0; j < 10; j++)
        if(maxnumber < number[j])
            maxnumber = number[j];
    printf("\n\nMaximumnumber is :: %d",maxnumber);
    return(0);
}
