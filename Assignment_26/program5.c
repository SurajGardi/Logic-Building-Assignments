#include<stdio.h>

void StrRevX(char *str)
{
    char *start = str;      //start points to 1st character
    char *end = str;        //end points to last character
    char temp;
    
    while(*end != '\0') {   // loop iterate till it not found las chara as '\0'
        end++;              // here we got length of string 
    }
    end--;                  // Point to last char by neglating '\0'

    while(start < end) {    // start = base addr || end = last element addr 
        temp = *start;      // base addr(start) element storing into temp
        *start = *end;      // character at end address swaped in start 
        *end = temp;        // 1st element is swaped into last one

        start++;            // here we incrementing start and 
        end--;              // decrement end untill fulfill / Break the cond^n
    }
    printf("Reversed String in StrRevX() : %s\n", str);
}

int main()
{
    char arr[20] ;

    printf("Enter String : ");
    scanf("%[^'\n']s",&arr);

    StrRevX(arr);

    printf("\nReversed String in main() : %s\n", arr);

    return 0;
}