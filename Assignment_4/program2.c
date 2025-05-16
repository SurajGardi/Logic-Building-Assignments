#include<stdio.h>

void FactRev(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = (iNo/2); i >= 1; i--)
    {
        if((iNo % i) == 0)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}