#include <stdio.h>
/*
   THIS PROGRAM IS
*
*   *
*   *   *
THIS TYPE OF PYRAMID
*/
/*
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
        for(int i = 0; i <= num; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                printf("*\t");
            }
            printf("\n");
        }
        return(0);
}
*/
/*
THIS PROGRAM IS
*   *   *   *
*   *   *
*   *
*
THIS TYPE OF PYRAMID
*/
/*
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
        for(int i = num; i >= 0; i--)
        {
            for(int j = i; j >= 0; j--)
            {
                printf("*\t");
            }
            printf("\n");
        }
        return(0);
}
*/
/*
THIS PROGRAM IS
1
2   3
4   5   6
PYRAMID
*/
/*
int main()
{
    int num,disp_num = 1;
    printf("Please enter the number of row for pyramid::");
    scanf("%d",&num);
    for(int i = 0; i <= num; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%d\t",disp_num);
            disp_num++;
        }
        printf("\n");
    }
    return(0);
}
*/
