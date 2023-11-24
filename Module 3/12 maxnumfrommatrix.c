#include <stdio.h>

int main()
{
    int matrix[3][3],maxnumber;
    printf("Please Enter the value in matrix::\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    maxnumber = matrix[0][0];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(maxnumber < matrix[i][j])
                maxnumber = matrix[i][j];
        }
    }
    printf("\nMaxmimum number from the matrix is %d",maxnumber);
    return(0);
}
