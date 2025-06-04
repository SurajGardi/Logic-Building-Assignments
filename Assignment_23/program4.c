#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    bool bRes = false;

    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
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
        printf(" %c is special Character",cValue);
    }
    else
    {
        printf(" %c is not Special Character",cValue);
    }

    return 0;
}