#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
int main(){
   FILE *fp;
   fp=fopen("./test.txt","r");
   printf("fd =%d\n",fp->_fileno);
return 0;
}

