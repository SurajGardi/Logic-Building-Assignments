#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>       // Required for LINUX OS

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the name of file that you want to Open : ");
    scanf("%s",Fname);

    // O_RDONLY
    // O_WRONLY
    // O_RDWR

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to Open file\n");
        return -1;
    }

    printf("File is succesfully Opened with FD %d\n",fd);

    return 0;
}