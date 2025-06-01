#include<stdio.h>
#include<stdlib.h>

int MaxMinDiff(int Arr[], int iLength)
{
    int iCnt = 0, iLarge = 0, iMaxTemp = 0, iMinTemp = 0;

    for(iCnt = 0, iMaxTemp = Arr[0], iMinTemp = Arr[0]; iCnt < iLength; iCnt++)
    {
        if(iMaxTemp < Arr[iCnt])
        {
            iMaxTemp = Arr[iCnt];
        }
        
        if(iMinTemp > Arr[iCnt])
        {
            iMinTemp = Arr[iCnt];
        }
    }
    return iMaxTemp - iMinTemp;
}

int main()
{
    int iCnt = 0, iSize = 0, iRet = 0;
    int *p = NULL;

    printf("Enter Number of Elements : ");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to access Memory..");
        return -1;
    }

    printf("--- Enter %d Elements ---\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = MaxMinDiff(p, iSize);

    printf("Difference bet^n Maximunm & Minimum Elements is : %d ", iRet);

    free(p);

    return 0;
}