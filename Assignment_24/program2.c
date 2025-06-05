#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",&arr);

    iRet = CountSmall(arr);

    printf("Number of Small characters are : %d\n",iRet);

    return 0;
}