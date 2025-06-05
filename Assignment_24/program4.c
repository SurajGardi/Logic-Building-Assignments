#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    bool bRes = false;

    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
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
    bool bRet = false;

    printf("Enter string : ");
    scanf("%[^'\n']s",&arr);

    bRet = CheckVowel(arr);

    if(bRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    
    return 0;
}