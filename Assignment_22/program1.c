#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    bool bRes = false;

    if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf(" %c is Alphabhet",cValue);
    }
    else
    {
        printf(" %c is not Alphabhet",cValue);
    }

    return 0;
}