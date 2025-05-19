#include<stdio.h>

int AddDigits(int iNo)
{
    int iDigit = 0, iAns = 0;

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
        iAns = iAns + iDigit;
     }
     return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number to count to Addition of all digits : ");
    scanf("%d",&iValue);

    iRet = AddDigits(iValue);

    printf("Addition is : %d",iRet);
    return 0;
}

//  Time Complexity = O(N)