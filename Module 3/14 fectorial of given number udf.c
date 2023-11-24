#include <stdio.h>

int factorial(int);

int main()
{
    int num,fact;
    printf("Enter thr number to find factorial::");
    scanf("%d",&num);
    fact = factorial(num);
    printf("\nFactorial of given number %d is %d",num,fact);
    return(0);
}

int factorial(int number)
{
    int ans = 1;
    for(int i = number; i > 0; i--)
        ans = ans * i;
    return(ans);
}
