
//wAp in c open existing file 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fd=0,iRet=0;
	
	char fname[30];
	char data[7];
	printf("enter file name");
	scanf("%s",fname);
	
	fd=open(fname,O_RDWR); //fd  means assign to open it like token 
	
	if(fd==-1)
	{
		printf("unable to open file");
		return -1;
	}
	else
	{
		printf("File succesfully open %d",fd);
		
	}	
	
	iRet=read(fd,data,6);
	
	printf("%d bytes gets succesfully read from the file\n",iRet);
	
	printf("Data from the file is ");
	write(1,data,iRet);//1 means desktop //iRet means 
	close(fd);
	return 0;
}	