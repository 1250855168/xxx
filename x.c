#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int fd = open("./test.txt", O_CREAT | O_RDWR, 0644);
    if (fd < 0)
    {
        perror("open error");
        exit(1);
    }

    // char ch[] = "hello world!";

    // ssize_t s = write(fd, ch, strlen(ch));
    // if (s < 0)
    // {
    //     perror("open error");
    //     exit(1);
    // }

    char ch[1024]={0};
    int num = read(fd,ch,1024);
    printf("%d\n",num);
    fprintf(stdout,ch,1024);
    putchar('\n');

    close(fd);

    return 0;
}