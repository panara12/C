#include <stdio.h>
void maiin()
{
    int c,r,n;
    printf("enter row numbers");
    scanf("%d",&n);
    for(r=0;r<=n;r++)
    {
        for(c=0;c<=r;c++)
        {
            printf("*");
        }
    }

}