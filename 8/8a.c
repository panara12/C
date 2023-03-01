#include <stdio.h>
void main()
{
    int no1,no2;
    printf("enter number = \n");
    scanf("%d%d",&no1,&no2);
    (no1>no2)?printf("no1 is largest %d",no1):printf("no2 is largest %d",no2);
}