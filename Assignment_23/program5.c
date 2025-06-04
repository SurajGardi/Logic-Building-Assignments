#include <stdio.h>

void Display(char ch)
{

    printf(" Decimal of %c is : %d \n",ch,ch);
    printf(" Octal of %c is : %o \n",ch,ch);
    printf(" Hexadecimal of %c is : 0X%X \n",ch,ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);  

    Display(cValue);

    return 0;
}
