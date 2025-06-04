#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("--------------------------------------------------\n");
    printf("| Decimal |  Char  | Hexadecimal |     Octal     |\n");
    printf("--------------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        if(iCnt < 32 || iCnt == 127)
            printf("|  %3d    |   N/A  |     %02X      |     %03o       |\n", iCnt, iCnt, iCnt);
        else
            printf("|  %3d    |   %c    |     %02X      |     %03o       |\n", iCnt, iCnt, iCnt, iCnt);
    }

    printf("--------------------------------------------------\n");
}

int main()
{
    DisplayASCII();
    return 0;
}
