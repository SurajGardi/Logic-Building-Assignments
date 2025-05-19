#include<stdio.h>

int CountRange(int iNo)
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
        if((iDigit > 3) && (iDigit < 7))
        {
            iCnt++;
        }
     }
     return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number to count Frequency of digits between 3 to 7 : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Frequency is %d",iRet);
    return 0;
}

//  Time Complexity = O(N)