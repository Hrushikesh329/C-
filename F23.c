//Accept file from user And check occurance of character A

 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char fname[20];//for in[ut file
	char Buffer[10];
	int iSum=0;
	
	int iCnt=0,iRet=0,i=0;
	
	
	printf("Enter file name");
	scanf("%s",fname);
	
	fd=open(fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("unambe to open");
		return -1;
	}

	while((iRet=read(fd,Buffer,10))!=0)//10 means read 10 bytes
	{
		
			iSum=iSum+iRet;
	
	}	
	printf("total number of Digit is%d\n",iSum);
	close(fd);		
	
	
	return 0;	
}	