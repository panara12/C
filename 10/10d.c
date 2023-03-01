#include <stdio.h>
void main()
{
    float a,no,sum=0;
    printf("enter a number ");
    scanf("%f",&no);
    for(a=1;a<=no;a++)
    {
        sum=sum+(1/a);
    }
    printf("sum= %f",sum);
}