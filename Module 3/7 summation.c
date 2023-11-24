#include <stdio.h>

int main()
{
    int sum = 0,num;
    printf("Please enter the number::");
    scanf("%d",&num);
    if(num < 10)
    {
        printf("\nSum of the number is not possible");
        exit(0);
    }
    while(num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    printf("The sum of the number is ::%d",sum);
    return(0);
}
