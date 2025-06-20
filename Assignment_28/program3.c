#include<stdio.h.>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0, iRet = 0;
    char Fname[50] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter file name : ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file..");
        return -1;
    }
    else
    {
        printf("File opened succesfully with fd : %d\n",fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            write(1,Buffer,iRet);
            memset(Buffer,'\0',BUFFER_SIZE);
        }
        close(fd);
    }
    return 0;
}