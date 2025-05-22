// Input 5

/*
    5       #       4       #       3       #       2       #       1       #
*/

#include<stdio.h>

int Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number of Elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

//  Time Complexity = O(N)