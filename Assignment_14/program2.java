// 4 4

/*
    2       4       6       8
    1       3       5       7
    2       4       6       8
    1       3       5       7
 */

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0, iCnt = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, iCnt = 1; j <= iCol; j++)
            {
                if((i % 2 != 0))
                {
                    System.out.print(j * 2+"\t");
                }
                else
                {    
                    System.out.print(iCnt+"\t");
                    iCnt = iCnt + 2;
                }
            }
            System.out.println();
        }
    }
}   

class program2
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of Rows and Columns : ");

        Scanner sobj = new Scanner(System.in);

        iValue1 = sobj.nextInt();
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
        
    }
}