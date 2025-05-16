#include<stdio.h>

int SumFactNonFact(int iNo)
{
    int iCnt = 0;
    int iNonFactSum = 0;
    int iFactSum = 0;
    int iSumDiff = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else if((iNo % iCnt) != 0)
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }
    iSumDiff = iNonFactSum - iFactSum;


    return iSumDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = SumFactNonFact(iValue);

    printf("Summetion of all factors and non-factors of is : %d",iRet);

    return 0;
}