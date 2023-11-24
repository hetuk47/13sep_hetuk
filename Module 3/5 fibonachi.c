#include <stdio.h>

int main()
{
    int num;
    long int numn,num0 = 0,num1 = 1;
    printf("Please enter the number to which you want to get fibonachi\n");
    scanf("%d",&num);
    if(num == 0)
    {
        printf("\n%d",num);
        exit(0);
    }
    else if(num == 1)
    {
        printf("0\n%d",num);
        exit(0);
    }
    else
    {
        for(int i = 2; i <= num; i++)
        {
            if(i == 2)
            {
                printf("\n0\n1");
            }
            numn = num1 + num0;
            printf("\n%ld",numn);
            num0 = num1;
            num1 = numn;
        }
    }
    return(0);
}
