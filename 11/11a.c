#include <stdio.h>
void main()
{
    int a,sum=1,no,p;
    printf("enter a number and power\n");
    scanf("%d%d",&no,&p);
    for(a=1;a<=p;a++)
    {
        sum=sum*no;
    }
    printf("%d",sum);
}