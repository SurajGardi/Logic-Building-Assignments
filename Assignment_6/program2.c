    #include<stdio.h>

    void Number(int iNo)
    {
        if(iNo == 0)
        {
            printf("Zero");
        }
        else if(iNo == 1)
        {
            printf("One");
        }
        else if(iNo == 2)
        {
            printf("Two");
        }
        else if(iNo == 3)
        {
            printf("Three");
        }
        else if(iNo == 4)
        {
            printf("Four");
        }
        else if(iNo == 5)
        {
            printf("Five");
        }
        else if(iNo == 6)
        {
            printf("Six");
        }
        else if(iNo == 7)
        {
            printf("Seven");
        }
        else if(iNo == 8)
        {
            printf("Eight");
        }
        else if(iNo == 9)
        {
            printf("Nine");
        }
        else
        {
            printf("Invalid Number");
        }
    }

    int main()
    {
        int iValue = 0;

        printf("Enter Number : ");
        scanf("%d",&iValue);

        Number(iValue);
        return 0;
    }


    // we can also solve this using switch case :

    // void Number(int iNo)
    // {
    //     switch(iNo)
    //     {
    //         case 0: printf("Zero"); break;
    //         case 1: printf("One"); break;
    //         case 2: printf("Two"); break;
    //         case 3: printf("Three"); break;
    //         case 4: printf("Four"); break;
    //         case 5: printf("Five"); break;
    //         case 6: printf("Six"); break;
    //         case 7: printf("Seven"); break;
    //         case 8: printf("Eight"); break;
    //         case 9: printf("Nine"); break;
    //         default: printf("Invalid Number");
    //     }
    // }