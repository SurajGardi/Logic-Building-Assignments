#include <stdio.h>

void DisplayScedule(char ch)
{
    if(ch == 'A')
    {
        printf("Your Exam at 7 AM");
    }
    else if(ch == 'B')
    {
        printf("Your Exam at 8.30 AM");
    }
    else if(ch == 'C')
    {
        printf("Your Exam at 9.20 AM");
    }
    else if(ch == 'D')
    {
        printf("Your Exam at 10.30 AM");
    }
    else
    {
        printf("Invalid Input");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your Division : ");
    scanf("%c",&cValue);

    DisplayScedule(cValue);

    return 0;
}