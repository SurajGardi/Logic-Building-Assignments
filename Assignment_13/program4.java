// Input 4 4

/*
    4       4       4       4
    3       3       3       3
    2       2       2       2
    1       1       1       1
*/
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = iRow; i >= 1 ; i--)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(i+"\t");               
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

        System.out.print("Enter rows and columns: ");
        iValue1 = sobj.nextInt();
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1,iValue2);
    }
}

//  Time Complexity = O(N)