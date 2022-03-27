//accept fil name from user and accept whole file in display


//wAp in c open existing file 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fdsrc=0,fddest=0,iRet=0;
	
	char fname[30];
	char fname2[30];
	char Buffer[1024];//os buffer size 1024(kb size) 
	
	printf("enter file name");
	scanf("%s",fname);
	
	
	
	fdsrc=open(fname,O_RDONLY); //fd  means assign to open it like token 
	
	if(fdsrc==-1)
	{
		printf("unable to open file");
		return -1;
	}
	else
	{
		printf("File succesfully open %d",fdsrc);
		
	}	
	
	
	printf("Enter create file name");
	scanf("%s",fname2);
	
	fddest=creat(fname2,0777);
	
	printf("Data from the file is\n");
	
	while((iRet=read(fdsrc,Buffer,sizeof(Buffer)))!=0)
	{
		write(fddest,Buffer,iRet);
	}	
	close(fdsrc);
	close(fddest);
	return 0;
}	

