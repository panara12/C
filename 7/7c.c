#include <stdio.h>
void main()
{
    char cha;
    printf("enter a character=");
    scanf("%c",&cha);
    if(cha>='a' && cha<='z')
    {
        printf("charecter is small letter");
    }
    else if(cha>='A' && cha<='Z')
    {
        printf("charecter is capital letter");
    }
    else if(cha>='0' && cha<='9')
    {
        printf("charecter is digit letter");
    }
    else
    {
        printf("charecter is special letter");
    }
}
