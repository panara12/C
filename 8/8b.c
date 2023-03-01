#include <stdio.h>
void main()
{
    int no1,no2,no3;
    printf("enter number = \n");
    scanf("%d%d%d",&no1,&no2,&no3);
    (no1>no2 && no1>no3)?printf("no1 is largest %d",no1):(no2>no1 && no2>no3)?printf("no2 is largest %d",no2):printf("no3 is largest %d",no3);
    
}