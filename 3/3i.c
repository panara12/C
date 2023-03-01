#include <stdio.h>
void main()
{
    float simpleintrest,rupees,time,intrest;
    printf("this programme is for calculate simple intrest\n");
    printf("enter rupees=\n");
    scanf("%f",&rupees);
    printf("enter intrest=\n");
    scanf("%f",&intrest);
    printf("enter time=\n");
    scanf("%f",&time);
    simpleintrest=(rupees*time*intrest)/100;
    printf("simple intrest is =%f",simpleintrest);
    
}
