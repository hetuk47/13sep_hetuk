#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,height,radious,wid,len;
    float area;
    char choss;
    system("cls");
    printf("Please choose which area you want to calculat::");
    printf("\nenter 't' for Tirangle, 'c' for circle and 'r' for rectangle::");
    fflush(stdin);
    scanf("%c",&choss);
    switch(choss)
    {
        case 't':
        {
            printf("\nPlease enter size of the base::");
            scanf("%d",&base);
            printf("\nPlease height on base::");
            scanf("%d",&height);
            area  = (float)(base * height)/2;
            printf("\nArea of the Triangle is :: %f",area);
            break;
        }
        case 'c':
        {
            printf("\nPlease enter radius of a circle::");
            scanf("%d",&radious);
            area = 3.1415 * (radious ^ 2);
            printf("\nThe area of circle is :: %f",area);
            break;
        }
        case 'r':
        {
            printf("\nPlease enter width of the ractalgle::");
            scanf("%d",&wid);
            printf("\nPlease wnter length of the racangle::");
            scanf("%d",&len);
            area = wid * len;
            printf("\nArea of the ractangle is :: %f",area);
            break;
        }
        default:
        {
            printf("\nYou didnot choos curectly::");
            break;
        }
    }
    return(0);
}
