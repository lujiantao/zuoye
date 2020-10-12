#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
int main(){
   int fd;
   fd=open("./test.txt",O_RDONLY);
   printf("fd =%d\n",fd);
return 0;
}

