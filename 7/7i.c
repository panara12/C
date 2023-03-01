#include <stdio.h>
void main()
{
    int side1,side2,side3;
    printf("enter triangels sides = \n");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2 && side2==side3)
    {
        printf("given triangle is equilaterl");
    }
    else if ((side1*side1)+(side2*side2)==(side3*side3))
    {
        printf("given triangle is rigth angled triangle");
    }
    else if (side1==side2 || side2==side3 || side3==side1)
    {
        printf("given triangle is isoscalene");
    }
    else
    {
        printf("given triangle is scalene");
    }
}