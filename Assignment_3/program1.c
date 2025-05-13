#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iEven = 0;

    if(iNo < 0)     //Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iEven = iEven + 2;
        printf("%d ",iEven);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}