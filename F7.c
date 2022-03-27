//accept fil name from user and accept whole file in display


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
	char Buffer[10];
	
	printf("enter file name");
	scanf("%s",fname);
	
	fd=open(fname,O_RDONLY); //fd  means assign to open it like token 
	
	if(fd==-1)
	{
		printf("unable to open file");
		return -1;
	}
	else
	{
		printf("File succesfully open %d",fd);
		
	}	
	printf("Data from the file is\n");
	
	while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
	{
		write(1,Buffer,iRet);
	}	
	close(fd);
	return 0;
}	

