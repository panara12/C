#include <stdio.h>
void main()
{
    int no,a;
    printf("enter a number ");
    scanf("%d",&no);
    for (a=1;a<=no;)
    {
        if(no%a==0)
        {
        printf("%d\n",a);
        }
        a++;
    }
}
