#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           return iCount;
        }
        iCount++;
        str++;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",&arr);

    printf("Enter Character to Chk 1st occurance index in Given String : ");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);
    
    printf("Characte Location is : %d ",iRet);

    return 0;
}