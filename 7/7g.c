#include <stdio.h>
void main()
{
    int sub1,sub2,sub3,sub4,sub5,marks;
    float per;
    printf("enter 5 subject marks=\n");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    per=(sub1+sub2+sub3+sub4+sub5)/5.00;
    printf("percantage is %f",per);
    if(35>per)
    {
        printf("you are fail");    
    }
    else if(35<=per && per<45)
    {
        printf("you are in pass class");
    }
    else if(45<=per && per<60)
    {
        printf("you are in second class");
    }
    else if(60<=per && per<70)
    {
        printf("you are in first class");
    }
    else
    {
        printf("you are in distinction class");
    }
}