#include<stdio.h>

int DollarToINR(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    return iNo = iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number in USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);
    return 0;
}

//  Time Complexity = O(N)