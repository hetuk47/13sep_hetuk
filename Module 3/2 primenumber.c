#include <stdio.h>

int main()
{
    int num,flag = 0;
    printf("Please enter the number to check for prime number::");
    scanf("%d",&num);
    if(num == 0 || num == 1)
    {
        printf("\nGiven number is not prime number as it does not meet primenumber range");
        exit(1);
    }
    else if(num == 2)
    {
        printf("\nGiven number is First and only even prime number");
        exit(0);
    }
    else
    {
        for(int i = 2;i < num;i++)
        {
            if(num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("\nGiven number %d is Prime number::",num);
        else
            printf("\nGiven number %d is not prime number::",num);
    }
    return(0);
}
