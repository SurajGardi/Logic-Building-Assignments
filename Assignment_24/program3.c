#include<stdio.h>

int Difference(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount--;
        }
        str++;
    }

    if(iCount < 0)
    {
        iCount = -iCount;
    }
    
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",&arr);

    iRet = Difference(arr);

    printf("Diff Betn freqn of characters are : %d\n",iRet);

    return 0;
}