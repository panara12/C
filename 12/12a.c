#include<stdio.h>

void main()
{
	int no,sum;
    printf("enter no:");
    scanf("%d",&no);
    for( ;no>0;no=no/10)
    {
        sum=no%10;
        printf("%d",sum);
    }
}  