#include<stdio.h>

void Display(int iNo1, int iNo2)
{
    int iCnt = 0;

    if(iNo2 < 0)            //updator
    {
        iNo2 = -iNo2;
    }

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        printf("%d ",iNo1);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter 1st Number : ");
    scanf("%d",&iValue1);

    printf("Enter 2nd Number : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}