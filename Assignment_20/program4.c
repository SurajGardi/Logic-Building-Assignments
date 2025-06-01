#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("%d \t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iCnt = 0, iSize = 0, iValue1 = 0, iValue2 = 0;
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

    printf("Enter the Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter the Ending point : ");
    scanf("%d",&iValue2);

    Range(p, iSize, iValue1,iValue2);

    free(p);

    return 0;
}