#include <stdio.h>

int main()
{
    int array[10],position;
    printf("Enter 10 elements in array\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nEnter the postion between 0-10 fo fatch the element\n");
    scanf("%d",&position);
    printf("The element from the position %d is %d\n",position,array[position]);
    return(0);
}
