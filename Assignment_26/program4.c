#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0, iLast = 0;

    iLast = -1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
           iLast = iCount;
        }
        iCount++;
        str++;
    }
    return iLast;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",&arr);

    printf("Enter Character to Chk Last occurance index in Given String : ");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);
    
    printf("Characte Location is : %d ",iRet);

    return 0;
}