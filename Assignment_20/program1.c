#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;
    bool bRes = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bRes = true;
        }
    }
    return bRes;
}

int main()
{
    int iCnt = 0, iSize = 0, iValue = 0;
    bool bRet = false;
    int *p = NULL;

    printf("Enter Number of Elements : ");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    printf("Enter %d Elements \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number to check it : ");
    scanf("%d",&iValue);

    bRet = Check(p, iSize, iValue);

    if(bRet == true)
    {
        printf("%d is Present",iValue);
    }
    else
    {
        printf("%d is NOT Present",iValue);
    }

    free(p);

    return 0;
}