// input : 6 6

/*
    *       *       *       *       *       *
    *                               *       *
    *                       *               *
    *               *                       *
    *       *                               *
    *       *       *       *       *       *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iCol; i++)
    {
        for(j = iRow; j >= 1; j--)
        {
            if((i == j) || (i == 1) || (i == iCol) || (j == 1) || (j == iRow))
            {
                printf("* \t");
            }
            else
            {
                printf(" \t");
            }

        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Rows and Columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}