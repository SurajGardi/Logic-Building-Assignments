#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iLarge = 0, iTemp = 0;

    for(iCnt = 0, iTemp = Arr[0]; iCnt < iLength; iCnt++)
    {
        if(iTemp < Arr[iCnt])
        {
            iTemp = Arr[iCnt];
        }
    }
    return iTemp;
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

    iRet = Maximum(p, iSize);

    printf("Maximunm Elements is : %d ", iRet);

    free(p);

    return 0;
}