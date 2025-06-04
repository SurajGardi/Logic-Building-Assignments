#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    bool bRes = false;

    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf(" %c is Capital Character",cValue);
    }
    else
    {
        printf(" %c is not Capital Character",cValue);
    }

    return 0;
}