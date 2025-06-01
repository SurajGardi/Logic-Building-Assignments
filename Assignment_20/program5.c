#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iProduct = 1;
    int iOddFound = 0;      // using flag

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iProduct = iProduct * Arr[iCnt];
            iOddFound = 1;
        }
    }

    if(iOddFound == 0)
    {
        return 0;
    }

    return iProduct;
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
        printf("Unable to allocate Memory");
        return -1;
    }

    printf("Enter %d Elements ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p, iSize);

    printf("The Product of Odd Numbers is : %d",iRet);

    free(p);

    return 0;
}