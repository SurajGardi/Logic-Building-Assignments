// Input 4 4

/*
    A       B       C       D
    a       b       c       d
    A       B       C       D
    a       b       c       d
*/
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch1 = '\0', ch2 = '\0';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch1 = 'A', ch2 = 'a'; j <= iCol; j++, ch1++, ch2++)
            {
                if((i % 2) != 0)
                {
                    System.out.print(ch1+"\t");
                }
                else
                {
                    System.out.print(ch2+"\t");
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

        System.out.print("Enter rows and columns: ");
        iValue1 = sobj.nextInt();
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1,iValue2);
    }
}

//  Time Complexity = O(N)