#include <stdio.h>
float intrest();
void main()
{
    int c;
    printf("this is progrmme for claculate the simple intrest");
    c=intrest();
}
float intrest()
{
    int p,r,n;
    float ans;
    scanf("%d%d%d",&p,&r,&n);
    ans=(p*r*n)/100;
    printf("%f",ans);
}