// Input 5

/*
    A       B       C       D       E
*/

#include<stdio.h>

int Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);
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