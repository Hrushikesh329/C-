

//wAp in c create file 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
	int fd=0;
	
	char fname[30];
	
	printf("enter file name");
	scanf("%s",fname);
	
	fd=creat(fname,0777);//0777 read=4 write=2 execute=1 17=own,27grp,37other first 0 means octal
	
	if(fd==-1)
	{
		printf("unable to create file");
	}
	else
	{
		printf("File succesfully create");
	}	
	
	return 0;
}	