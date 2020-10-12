#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
int main(void){
int fd=open("./test.txt",O_CREAT,0644,"test");
printf("file descriptor=%d\n",fd);
close(fd);
return 0;
}
