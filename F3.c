

//wAp in c open existing file 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fd=0;
	
	char fname[30];
	
	printf("enter file name");
	scanf("%s",fname);
	
	fd=open(fname,O_RDWR);//RDWR =read for rd  write for wr 
	
	if(fd==-1)
	{
		printf("unable to open file");
	}
	else
	{
		printf("File succesfully open %d",fd);
	}	
	
	return 0;
}	