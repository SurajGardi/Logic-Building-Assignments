// Input 4 4

/*
    1       2       3       4
    5       6       7       8
    9       1       2       3
    4       5       6       7
 */

import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0, iCnt = 0;

        for(i = 1, iCnt = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++,iCnt++)
            {
                if ((iCnt >= 1) && (iCnt <= 9)) 
                {
                    System.out.print(iCnt+"\t");
                }
                else
                {
                    iCnt = 1;
                    System.out.print(iCnt+"\t");
                }            
            }
            System.out.println();
            
        }
    }
}
class program1
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of rows and columns : ");
        iValue1 = sobj.nextInt();
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1,iValue2);
    }
}