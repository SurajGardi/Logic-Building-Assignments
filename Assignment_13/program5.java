// Input 3  4

/*
    1       2       3       4
    5       6       7       8
    9       10      11      12
*/
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0, iNo = 0;

        for(i = 1, iNo = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++, iNo++)
            {
                System.out.print(iNo+"\t");
            }
            System.out.println();
        }
    }
}

class program5
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter rows and columns: ");
        iValue1 = sobj.nextInt();
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1,iValue2);
    }
}

//  Time Complexity = O(N)