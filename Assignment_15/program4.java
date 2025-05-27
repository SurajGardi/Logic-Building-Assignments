// Input  6 5

/*
    *       *       *       *       *
    *       @       @       @       *
    *       @       @       @       *
    *       @       @       @       *
    *       @       @       @       *
    *       *       *       *       *
 */

 import java.util.*;

 class Pattern
 {
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0, iCnt = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(((i == 1) || (i == iRow)) || ((j == 1) || (j == iCol)) )
                {
                    System.out.print("*"+"\t");
                }
                else
                {
                    System.out.print("@"+"\t");
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

        System.out.println("Enter number of Rows and Columns : ");

        Scanner sobj = new Scanner(System.in);

        iValue1 = sobj.nextInt();
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);

    }
}