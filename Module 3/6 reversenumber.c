#include <stdio.h>

int main()
{
    int num,reverse_num = 0,num0;
    printf("Please Enter the number::");
    scanf("%d",&num);
    if (num < 10)
    {
        printf("\nNumber is less than 10 can not perform this program");
        exit(0);
    }
    num0 = num;
    while(num > 0)
    {
        reverse_num = (reverse_num * 10) + (num % 10);
        num = num / 10;
    }
    printf("The reversed number of %d is %d",num0,reverse_num);
    return(0);
}
