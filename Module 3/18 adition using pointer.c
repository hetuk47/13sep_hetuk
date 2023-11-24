#include <stdio.h>

int main()
{
    int a,b,*ptra,*ptrb,ans;
    printf("Enter the value of a::");
    scanf("%d",&a);
    printf("\nEnter value of b::");
    scanf("%d",&b);
    ptra = &a;
    ptrb = &b;
    ans = *ptra + *ptrb;
    printf("\nAfter adding through pointer answer is %d",ans);
    return (0);
}
