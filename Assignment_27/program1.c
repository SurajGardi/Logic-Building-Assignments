#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    char *temp = dest;  // Save starting address of destination

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';   // if not terminating dest string with Null('\0') then after copied part it may contain garbage
    printf("Copied Content : %s",temp); //here we used temp to print full string if we use dest here then its already points to Null('\0)
}

int main()
{
    char arr[100];
    char brr[100];

    printf("Enter String : ");
    scanf("%[^'\n']s",&arr);

    StrCpyX(arr,brr);

    printf("\nCopied Content main : %s",brr);

    return 0;
}