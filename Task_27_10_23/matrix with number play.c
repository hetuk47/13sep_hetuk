#include <stdio.h>

int main()
{
    int num,k = 0;
    printf("Enter the valu for matrix::");
    scanf("%d",&num);
    int array[num][num];
    for(int i = 0; i < num; i++)
    {
        if(i%2 == 0)
        {
            for(int j = 0; j < num; j++)
            {
                array[i][j] = (num*num)-i-k;
                k++;
            }
            k--;
        }
        if(i%2 != 0)
        {
            for(int j = num-1; j >= 0; j--)
            {
                array[i][j] = (num*num)-i-k;
                k++;
            }
            k--;
        }
    }
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
