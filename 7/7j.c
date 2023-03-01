#include <stdio.h>
#include <math.h>
int main()
{
    float d,b,a,c,r1,r2,i1,i2,r;
    printf("enter a= ");
    scanf("%f",&a);
    printf("enter b= ");
    scanf("%f",&b);
    printf("enter c= ");
    scanf("%f",&c);
    d=(b*b)-4*a*c;
    if(d>0)
    {
        r1=((-b)+sqrt(d))/(2*a);
        r2=((-b)-sqrt(d))/(2*a);
        printf("ans is following %f and %f",r1,r2);
    }
    else if(d<0)
    {
        i1=((-b)+sqrt(-d))/(2*a);
        i2=((-b)-sqrt(-d))/(2*a); 
        printf("ans is following %f and %f",i1,i2);
    }
    else
    {
        r=(-b)/(2*a);
        printf("ans is %f",r);
    }
}
