#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    return iCnt;
}

int main()
{
    int iCnt = 0, iSize = 0, iValue = 0, iRet = 0;
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

    printf("Enter the number to check index of 1st occurence : ");
    scanf("%d",&iValue);

    iRet = FirstOcc(p, iSize, iValue);

    if(iRet >= iSize)
    {
        printf("Element is not present in an array");        
    }
    else
    {
        printf("%d first occurance at %d index",iValue,iRet);
    }

    free(p);

    return 0;
}