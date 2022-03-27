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
	char Arr[10];
	fd=open("LB17.txt",O_RDWR); 
	if(fd==-1)
	{
		printf("unable to open file");
	}

	read(fd,Arr,10);
	printf("Data from the file is\n");
																														
																        															
	write(1,Arr,10);  //10 means kity data lihyach ahe          
	
	close(fd);
	
	return 0;	
}	