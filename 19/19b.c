#include <stdio.h>
int sum()
{
    int a,n,sum;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
    sum=sum+a;
    }
    printf("%d",sum);
}
void main()
{
    int c;
    c=sum();
}