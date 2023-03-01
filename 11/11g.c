#include<stdio.h>

void main()
{
	int a,no,flag=0;
    printf("enter no:");
    scanf("%d",&no);
    for(a=2;a<=(no/2);a++)
    {
        if(no%a==0)
        flag=1;
    }
    if(flag==0)
    printf("prime");
    else
    printf("not prime");
    
}  