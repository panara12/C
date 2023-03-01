#include <stdio.h>
void main()
{
    int no1,no2,no3;
    printf("enter numbers");
    scanf("%d",&no1);
    printf("enter numbers");
    scanf("%d",&no2);
    printf("enter numbers");
    scanf("%d",&no3);
    if(no1>no2 && no1>no3)
    {
        printf("no1 is big");
    }
    else if(no2>no3)
    {
        printf("no2 iis big");
    }
    else
    {
        printf("no3 is big");
    }
}
