#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    bool bRes = false;

    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf(" %c is Small Character",cValue);
    }
    else
    {
        printf(" %c is not Small Character",cValue);
    }

    return 0;
}