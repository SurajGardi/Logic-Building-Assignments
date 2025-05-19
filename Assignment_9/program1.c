#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d \n",iDigit);
        iNo = iNo / 10;
    }

}

int main()
{
    float iValue = 0;

    printf("Enter Number : ");
    scanf("%f",&iValue);

    DisplayDigit(iValue);

    return 0;
}

//  Time Complexity = O(N)