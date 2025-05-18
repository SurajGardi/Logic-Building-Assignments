#include<stdio.h>

int KMtoMeter(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    return iNo = iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is %d",iRet);
    return 0;
}

//  Time Complexity = O(N)