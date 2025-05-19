#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iAns = 1;

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
        if(iDigit != 0)
        {
            iAns = iAns * iDigit;
        }
     }
     return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number to count to multiply all digits : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication is : %d",iRet);
    return 0;
}

//  Time Complexity = O(N)