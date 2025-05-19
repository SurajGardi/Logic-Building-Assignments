#include<stdio.h>

int CountTwo(int iNo)
{
    int iCnt = 0, iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

     while(iNo != 0)
     {
        iDigit = iNo % 10;
        //printf("Mod : %d\n",iDigit);
        iNo = iNo / 10;
        //printf("Divide : %d\n",iNo);
        if(iDigit == 2)
        {
            iCnt++;
        }
     }
     return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number to count Frequency of 2 : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("Frequency of 2 is %d",iRet);
    return 0;
}

//  Time Complexity = O(N)