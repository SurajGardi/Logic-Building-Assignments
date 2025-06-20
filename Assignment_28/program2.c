#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[50] = {'\0'};

    printf("Enter the File name tat you want to Create : ");
    scanf("%s",&Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create File");
        return -1;
    }

    printf("File created Succesfully with fd : %d",fd);

    close(fd);

    return 0;
}