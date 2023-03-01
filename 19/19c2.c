#include <stdio.h>
int max(int,int);
void main()
{
    int no1,no2;
    scanf("%d%d",&no1,&no2);
    max(no1,no2);
}
int max(int x, int y)
{
    if(x>y)
        printf("%d is max",x);
    else if(x<y)
        printf("%d is max",y);
    else
        printf("eqaul");

}