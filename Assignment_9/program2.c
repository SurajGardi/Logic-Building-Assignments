#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0

bool ChkZero(int iNo)
{
    bool bResult = false;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bResult = true;
        }
        iNo = iNo / 10;
    }
    return bResult;
}

int main()
{
    int iValue = 0;
    bool  bRet = false;

    printf("Enter Number : ");
    scanf("%f",&iValue);

   
    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It Contains Zero(0) ");
    }
    else
    {
        printf("It Not contains Zero(0)");
    }

    return 0;
}

//  Time Complexity = O(N)