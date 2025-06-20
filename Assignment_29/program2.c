#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define Buffer_Size 1024

int CountSmall(char *Fname)
{
    int fd = 0, iCnt = 0, iSmallCount = 0, iRet = 0;
    char Buffer[Buffer_Size] = {'\0'};

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        return -1;
    }
    else
    {
        printf("File Opened Succesfully with fd : %d\n",fd);

        while((iRet = read(fd, Buffer, Buffer_Size)) != 0)
        {
            for(iCnt = 0; iCnt <= iRet; iCnt++)
            {
                if((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
                {
                    iSmallCount++;
                }
            }
            memset(Buffer,'\0',Buffer_Size);
        }
        close(fd);
    }
    return iSmallCount;
}

int main()
{
    int iRet = 0;
    char FileName[50] = {'\0'};

    printf("Enter File Name : ");
    scanf("%s",&FileName);

    iRet = CountSmall(FileName);

    if(iRet == -1)
    {
        printf("Unable to Open File \n");
    }
    else
    {
        printf("Small Characters Are : %d",iRet);
    }

    return 0;
}