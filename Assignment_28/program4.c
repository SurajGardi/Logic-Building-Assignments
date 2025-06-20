#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd =0, iRet = 0, iSum = 0;;
    char Fname[50] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter File Name : ");
    scanf("%s",&Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open File...");
        return -1;
    }
    else
    {
        printf("File opened Succesfully with fd : %d\n",fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            iSum = iSum + iRet;
        }
        printf("The file size is %d bytes",iSum);
    }

    return 0;
}