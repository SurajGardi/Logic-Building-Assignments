#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    char *temp = dest;  // Save starting address of destination

    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        } 
        src++;   
    }
    *dest = '\0';   // if not terminating dest string with Null('\0') then after copied part it may contain garbage
    printf("Capital Characters : %s",temp); //here we used temp to print full string if we use dest here then its already points to Null('\0)
}

int main()
{
    char arr[100];
    char brr[100];

    printf("Enter String : ");
    scanf("%[^'\n']s",&arr);

    StrCpyCap(arr,brr);

    printf("\nCapital Characters main : %s",brr);

    return 0;
}