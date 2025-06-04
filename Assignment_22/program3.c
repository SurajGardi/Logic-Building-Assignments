#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    bool bRes = false;

    if((ch >= '0') && (ch <= '9'))
    {
        bRes = true;
    }
    return bRes;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf(" %c is Digit",cValue);
    }
    else
    {
        printf(" %c is not Digit",cValue);
    }

    return 0;
}