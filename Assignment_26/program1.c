#include<stdio.h>
#include<stdbool.h>

int ChkChar(char *str, char ch)
{
    bool bRes = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           bRes = true;
        }
        str++;
    }
    return bRes;
}

int main()
{
    char arr[20];
    char cValue;
    bool bRet = false;

    printf("Enter String : ");
    scanf("%[^'\n']s",&arr);

    printf("Enter Character to Search in Given String : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);
    
    if(bRet == true)
    {
        printf("Character Found..");
    }
    else
    {
        printf("Character not Found..");
    }

    return 0;
}