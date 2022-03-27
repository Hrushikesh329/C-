

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
	char data[]="Marvellous infosystem";
	printf("enter file name");
	scanf("%s",fname);
	
	fd=open(fname,O_RDWR);//RDWR =read for rd  write for wr //two parameter rdwr kashya karta ,fname ky ughdyach
	
	if(fd==-1)
	{
		printf("unable to open file");
		return -1;//return os  return 0 success ,-1 failuer,
	}
	else
	{
		printf("File succesfully open %d",fd);
		
	}	
	
	iRet=write(fd,data,10);//22 is byte in character data  //dat means what u writ //fd means open file write
	// wrt 3 parameter kashat lihych fd, ky lihyach data ,kity lihych 22bytes
	printf("%d bytes gets succesfully written in the file",iRet);
	return 0;
}	