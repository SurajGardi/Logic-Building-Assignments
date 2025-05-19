#include<stdio.h>

int Count(int iNo)
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
        if(iDigit < 8)
        {
            iCnt++;
        }
     }
     return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number to count Frequency of digits less than 6 : ");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("Frequency is %d",iRet);
    return 0;
}

//  Time Complexity = O(N)