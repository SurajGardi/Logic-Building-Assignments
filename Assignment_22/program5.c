#include <stdio.h>
#include<stdbool.h>

void DisplayScedule(char ch)
{
    switch(ch)
    {
        case 'A':
            printf("Your Exam at 7 AM");
            break;
        case 'B':
            printf("Your Exam at 8.30 AM");
            break;
        case 'C':
            printf("Your Exam at 9.20 AM");
            break;
        case 'D':
            printf("Your Exam at 10.30 AM");
            break;
        default:
            printf("Invalid Input");
            break;
    }
}

int main()
{
    char cValue = '\0';

    while(true)
    {
        if(cValue == 'q')
        {
            break;
        }
        printf("\nEnter your Division : ");
        scanf(" %c",&cValue);

        DisplayScedule(cValue);
    }
    

    return 0;
}