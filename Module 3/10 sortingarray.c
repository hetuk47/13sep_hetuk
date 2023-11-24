#include <stdio.h>

int main()
{
    int array[10];
    printf("Please enter 10 values to sorting array::\n");
    for(int i = 0; i < 10; i++)
        scanf("%d",&array[i]);
    for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(array[i] > array[j])
            {
                array[i] = array[i] + array[j];
                array[j] = array[i] - array[j];
                array[i] = array[i] - array[j];
            }
        }
    }
    printf("\n\nSorted Array is as displayed here::\n");
    for(int i = 0; i < 10; i++)
        printf("%d\t",array[i]);
    return(0);
}
