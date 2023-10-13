//Program to swap number without using 3rd variable.
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the value a and b\n");
    scanf("%d%d",&a,&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swaping numbers a is %d and b is %d",a,b);
    return(0);
}
