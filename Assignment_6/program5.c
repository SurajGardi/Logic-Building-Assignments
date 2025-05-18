#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0, iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10;iCnt >= 1; iCnt-- )
    {
        iAns = iNo * iCnt;
        printf("%d\t",iAns);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}