#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Number Divisible by 5 are :");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
        {
            printf("%d \t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iCnt = 0, iSize = 0;
    int *p = NULL;
    
    printf("Enter Elements : \n");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize * sizeof(int));
    
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

    Display(p,iSize);

    free(p);

    return 0;
}