#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iLarge = 0, iSum = 0, iDigit = 0,iTemp = 0;

    printf("Summation of Digits of Each Number are : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iTemp = Arr[iCnt];
        iSum = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum += iDigit;
            iTemp = iTemp / 10;
        }

        printf(" %d ",iSum);
    }
}

int main()
{
    int iCnt = 0, iSize = 0;
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

    Digits(p, iSize);

    free(p);

    return 0;
}