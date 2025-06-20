#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


#define Buffer_Size 1024

int CountCapital(char Fname[])
{
    char Buffer[Buffer_Size] = {'\0'};
    int fd = 0, iRet = 0, iCnt = 0, iCapCount = 0;

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        return -1;
    }
    else
    {
        printf("File Opened Succesfully with fd : %d\n",fd);

        while((iRet = read(fd,Buffer,Buffer_Size)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
                {
                    iCapCount++;
                }
            }
            memset(Buffer,'\0',Buffer_Size);
        }

        close(fd);
    }
    return iCapCount;
}


int main()
{
    int iRet = 0;
    char FileName[50] = {'\0'};

    printf("Enter File Name : ");
    scanf("%s",&FileName);

    iRet = CountCapital(FileName);

    if(iRet == -1)
    {
        printf("Unable to open the file.\n");
    }
    else
    {
        printf("Capital characters are %d\n", iRet);
    }

    return 0;
}