#include <stdio.h>

void Display(char ch)
{
    for(ch = ch; ch <= 'Z'; ch++)
    {
        if(ch >= 'A' && ch <= 'Z')        
        {
            printf(" %c\t", ch);
        }
    }    
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);  

    Display(cValue);

    return 0;
}
