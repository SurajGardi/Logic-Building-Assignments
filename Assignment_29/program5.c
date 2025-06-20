#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

void DisplayN(char Fname[], int iSize)
{
    int fd = 0, iRet = 0, Printed = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file.\n");
        return;
    }

    printf("File successfully opened with fd: %d\n\n", fd);
    printf("Displaying first %d characters from %s:\n\n", iSize, Fname);

    while((iRet = read(fd, Buffer, BUFFER_SIZE)) != 0)
    {
        if(Printed + iRet <= iSize)
        {
            write(1, Buffer, iRet);           // Print entire buffer if it fits
            Printed += iRet;
        }
        else
        {
            write(1, Buffer, iSize - Printed); // Only print remaining needed chars
            break;                             // Done printing N chars
        }

        memset(Buffer, '\0', BUFFER_SIZE);     // Clear buffer for next read
    }

    close(fd);
}


int main()
{
    char FileName[50] = {'\0'};
    int iValue = 0;

    printf("Enter File Name : ");
    scanf("%s",&FileName);

    printf("Enter the Number of Characters : ");
    scanf("%d",&iValue);

    DisplayN(FileName, iValue);

    return 0;
}