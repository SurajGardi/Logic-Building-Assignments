#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
// acccept name from user and 1 string from user and write string at the end of file
int main()
{
    int fd = 0, iRet = 0;
    char Fname[50] = {'\0'};
    char Buffer[BUFFER_SIZE] = " India is my Country..!";

    printf("Enter Fiel Name : ");
    scanf("%s",&Fname);

    fd = open(Fname, O_CREAT | O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to create file..");
        return -1;
    }
    else
    {
        printf("File opened Succesfully with fd : %d\n",fd);

        iRet = write(fd,Buffer,strlen(Buffer));

        printf("%d bytes gets written Succesfully in %s",iRet,Fname);

        close(fd);
    }
    return 0;
}