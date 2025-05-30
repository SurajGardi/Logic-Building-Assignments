#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iEvenSum = 0, iOddSum = 0, iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2 ) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else if((Arr[iCnt] % 2) != 0)
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    iDiff = iEvenSum - iOddSum;

    if(iDiff < 0)
    {
        iDiff = -iDiff;
    }

    return iDiff;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter Number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Differnce bet^n Summation of Even & Odd elements are : %d",iRet);

    free(p);
    
    return 0;
}