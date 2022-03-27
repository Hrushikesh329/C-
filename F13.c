
 

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
	lseek(fd,5,0);//to shift first 5 character //zero means kuthun start karych ahe
	
	read(fd,Arr,5);
	printf("Data from the file is\n");
																														
																        															
	write(1,Arr,5);            
	
	close(fd);
	
	return 0;	
}	