#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 65) && (cValue <= 90))
    {
        cValue = cValue + 32;
        printf("%c",cValue);
    }
    else if((cValue >= 97) && (cValue <= 122))
    {
        cValue = cValue - 32;
        printf("%c",cValue);
    }
    else
    {
        printf("Enter valid input..");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter Character to change the case : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}