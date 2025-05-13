#include<stdio.h>
typedef int bool;

#define true 1
#define false -1

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 5",iValue);
    }
    else
    {
        printf("%d is NOT Divisible by 5",iValue);
    }

    return 0;
}