#include<stdio.h>

void Reverse(char *str)
{
    char *temp = str;   // temp taken for base addr

    while(*str != '\0')
    {  
        str++;  // at the end of loop str points to '\0'
    }
    str--;  //  here decrementing str by 1 bcos there is '\0' at the last 
            
    while(str >= temp)  //here temp ndicates base Addr and str indicates last character address
    {
        printf("%c",*str);
        str--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",&arr);

    Reverse(arr);

    return 0;
}