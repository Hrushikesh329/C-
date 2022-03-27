 

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
	//////////////////////
	lseek(fd,-5,2);//to shift 10 character //zero means kuthun start karych ahe


	
	
	read(fd,Arr,5);																														
																        															
	write(1,Arr,5);            
	
	//1 means current position//2means at the end file

	close(fd);
	
	return 0;	
}	