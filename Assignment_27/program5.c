#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    while(*src != '\0')
    {
        src++;
    }

    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

int main()
{
    char arr[100];
    char brr[100];

    printf("Enter String : ");
    scanf(" %[^'\n']s",&arr);

    printf("Enter String to Concat : ");
    scanf(" %[^'\n']s",&brr);

    StrCatX(arr,brr);
    
    printf("%s",arr);
    return 0;
}