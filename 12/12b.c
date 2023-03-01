#include <stdio.h>
void main()
{
    int n,sum=0;
    printf("enter a number ");
    scanf("%d",&n);
    for( ;n>=1;n=n/10)
    {
        sum=sum+(n%10);
    }
        printf("%d",sum);
}