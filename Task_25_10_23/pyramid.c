#include <stdio.h>

int main()
{
    int num;
    bigining:
        printf("Please enter the number of row for pyramid::");
        scanf("%d",&num);
        if(num == 0)
        {
            printf("\nPlease enter proper number of row");
            goto bigining;
        }
        for(int i = 0; i < num; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(int i = num; i > 0; i--)
        {
            for(int j = i; j > 0; j--)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n\n\n");
        for(int i = 1; i <= num; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(i%2 != 0)
                {
                    if(j%2 != 0)
                        printf("*");
                    else
                        printf(" ");
                }
                else
                {
                    if(j%2 == 0)
                        printf("*");
                    else
                        printf(" ");
                }
            }
            printf("\n");
        }
        for(int i = num; i > 0; i--)
        {
            for(int j = i; j > 0; j--)
            {
                if(i%2 == 0)
                {
                    if(j%2 != 0)
                        printf("*");
                    else
                        printf(" ");
                }
                else
                {
                    if(j%2 != 0)
                        printf("*");
                    else
                        printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n\n\n");
        for(int i = 1; i <= num; i++)
        {
            for(int k = num; k > i; k--)
            {
                printf(" ");
            }
            for(int j = 1; j <= i; j++)
            {
                printf("%d",j);
                if(j == i && i != 1)
                {
                    for(j = i-1; j > 0;j--)
                    {
                        printf("%d",j);
                    }
                    j = i;
                }
            }
            printf("\n");
        }
    return(0);
}
