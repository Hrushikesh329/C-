//accept fil name from user and accept whole file in display


//wAp in c open existing file 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char Arr[]="Hello";
	fd=open("LB17.txt",O_RDWR|O_APPEND);//for Append existing file last courser data go 
	if(fd==-1)
	{
		printf("unable to open file");
	}

	write(fd,Arr,5);
	close(fd);
	
	return 0;	
}	