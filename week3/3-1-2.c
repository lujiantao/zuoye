#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
int main(void){
FILE *fp=fopen("./ftest.txt","w");
char buf[80];
memset(buf,'0',sizeof(buf));
fgets(buf,sizeof(buf),stdin);
printf("\nth string is %s \n",buf);
fclose(fp);
return 0;
}
