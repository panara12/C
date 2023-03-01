#include <stdio.h>
void main()
{
    int a,no,sum=0;
    printf("enter a number ");
    scanf("%d",&no);
    for(a=1;a<=no;a++)
    {
        sum=sum+(a*a);
    }
    printf("sum= %d",sum);
}