#include <stdio.h>
#include <stdlib.h>

struct employeeinfo
{
    int empno,empage;
    char empname[10],empaddr[50];
}emp[5];

int main()
{
    printf("Enter Employee data");
    for(int i = 0; i < 5; i++)
    {
        printf("\nEmployee no::");
        scanf("%d",&emp[i].empno);
        printf("\nEmployee name::");
        scanf("%s",&emp[i].empname);
        printf("\nEnployee Address::");
        scanf("%s",&emp[i].empaddr);
        printf("\nEmployee Age::");
        scanf("%d",&emp[i].empage);
    }
    system("cls");
    printf("\nPrinting all Employee data::\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Employee no::%d\nEmplyee name::%s\nEmployee Address::%s\nEmployee Age::%d\n",emp[i].empno,emp[i].empname,emp[i].empaddr,emp[i].empage);
    }
    return(0);
}
