#include <stdio.h>
void main()
{
    int no1,no2,no3,no4,no5,no6,no7,no8,no9,no10,max,min;
    printf("entr 10 numbers=\n");
    scanf("%d%d%d%d%d%d%d%d%d%d",&no1,&no2,&no3,&no4,&no5,&no6,&no7,&no8,&no9,&no10);
    max=no1;
    min=no1;
    if(no2>max)
    {
        max=no2;
    }
    else if(no2<min)
    {
        min=no2;
    }
    if(no3>max)
    {
        max=no3;
    }
    else if(no3<min)
    {
        min=no3;
    }
    if(no4>max)
    {
        max=no4;
    }
    else if(no4<min)
    {
        min=no4;
    }
    if(no5>max)
    {
        max=no5;
    }
    else if(no5<min)
    {
        min=no5;
    }
    if(no6>max)
    {
        max=no6;
    }
    else if(no6<min)
    {
        min=no6;
    }
    if(no7>max)
    {
        max=no7;
    }
    else if(no7<min)
    {
        min=no7;
    }
    if(no8>max)
    {
        max=no8;
    }
    else if(no8<min)
    {
        min=no8;
    }
    if(no9>max)
    {
        max=no9;
    }
    else if(no9<min)
    {
        min=no9;
    }
    if(no10>max)
    {
        max=no10;
    }
    else if(no10<min)
    {
        min=no10;
    }
    printf("max number is %d\nmin number is %d\n",max,min);
}