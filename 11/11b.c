#include <stdio.h>
void main()
{
    long no,a;
    double sum=1;
    printf("enter a number ");
    scanf("%ld",&no);
    for (a=1;a<=no;) 
    {
        sum=a*sum;
        a++;        
    }
        printf("%lf\n",sum);
}
