#include <stdio.h>

int *sortfunction(int*);

int main()
{
    int arr[10],*sorted,i;
    printf("\nEnter 10 integer values in array::\n");
    for(i = 0; i < 10; i++)
        scanf("%d",&arr[i]);
    sorted = sortfunction(arr);
    printf("\nAfter sorting array::");
    for(i = 0; i < 10; i++)
        printf("\n%d",sorted[i]);
    return(0);
}

int *sortfunction(int *sortarray)
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(sortarray[i] > sortarray[j])
            {
                sortarray[i] = sortarray[i] + sortarray[j];
                sortarray[j] = sortarray[i] - sortarray[j];
                sortarray[i] = sortarray[i] - sortarray[j];
            }
        }
    }
    return(sortarray);
}
