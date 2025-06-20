#include<stdio.h.>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define Buffer_Size 1024

int CountChar(char Fname[], char Ch)
{
    int iRet = 0, iCnt = 0, iCount = 0, fd = 0;
    char Buffer[Buffer_Size] = {'\0'};

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        return -1;
    }
    else
    {
        printf("File opened Succesfully with fd : %d\n",fd);

        while(( iRet = read(fd, Buffer, Buffer_Size)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if(Buffer[iCnt] == Ch)
                {
                    iCount++;
                }
            }
            memset(Buffer, '\0', Buffer_Size);
        }
        close(fd);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char FileName[50] = {'\0'};
    char cValue = '\0';

    printf("Enter File Name : ");
    scanf("%s",&FileName);

    printf("Enter the Character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    if(iRet == -1)
    {
        printf("Unable to open File..");
    }
    else
    {
        printf("Frequency of %c is : %d\n",cValue,iRet);
    }

    return 0;
}