#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     //Updator
    {
        iNo = -iNo;
    }

    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}