// Input 5

/*
    2       4       6       8       10      12      14      16    #       1       *       #       2       *       #       3       *       #       4       *    1       *       2       *       3       *       4       *       5       *
*/

#include<stdio.h>

int Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt*2);
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