#include <stdio.h>
void main()
{
    int i,sum=0,no;
    printf("enter number");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}