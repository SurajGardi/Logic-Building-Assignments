#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",&arr);

    printf("Enter Character to Chk Frequency in Given String : ");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);
    
    printf("Frequency of %c id %d ",cValue,iRet);

    return 0;
}