#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    char *temp = dest;  // Save starting address of destination

    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z') || (*src == ' '))
        {
            *dest = *src;
            dest++;
        } 
        src++;   
    }
    *dest = '\0';   // if not terminating dest string with Null('\0') then after copied part it may contain garbage
    printf("Small Characters : %s\n",temp); //here we used temp to print full string if we use dest here then its already points to Null('\0)
}

int main()
{
    char arr[100];
    char brr[100];

    printf("Enter String : ");
    scanf("%[^'\n']s",&arr);

    StrCpySmall(arr,brr);

    printf(" Small Characters main : %s\n",brr);

    return 0;
}