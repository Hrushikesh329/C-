
//library create

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
using namespace std;

class Marvellous
{
	public:
		char Fname[30];
		int fd;
		
		Marvellous(char*Name)//constructor
		{
			cout<<"inside constructor";
			strcpy(Fname,Name);
			fd=open(Fname,O_RDWR);
		}	
		~Marvellous()//DEstructor
		{
			cout<<"inside Destructor";
			close(fd);
		}	
		
		void Display()
		{
			int iRect=0;
			char Buffer[10];
			lseek(fd,0,0);
			
			cout<<"Data from the file is";
			while((iRect=read(fd,Buffer,10))!=0)
			{
				write(1,Buffer,iRect);
			}
		}	

		int CountCapital()
		{
			int iRet=0,iCnt=0,i=0;
			
			char Buffer[10];
			lseek(fd,0,0);
			
			while((iRect=read(fd,Buffer,10))!=0)
			{
				for(i=0;i<iRect;i++)
				{
					if(Buffer[i]>='A'&&Buffer[i]<='Z')
					{
						iCnt++;
					}	
				}	
			}	
			return iCnt;		
		}
		
		int Countsmall()
		{
			int iRet=0,iCnt=0,i=0;
			
			char Buffer[10];
			lseek(fd,0,0);
			
			while((iRect=read(fd,Buffer,10))!=0)
			{
				for(i=0;i<iRect;i++)
				{
					if(Buffer[i]>='a'&&Buffer[i]<='z')
					{
						iCnt++;
					}	
				}	
			}	
			return iCnt;		
		}
		
		int CountDigit()
		{
			int iRect=0,iCnt=0,i=0;
			
			Buffer[10];
			lseek(fd,0,0);
			
			while((iRect=read(fd,Buffer,10))!=0)
			{
				for(i=0;i<iRect;i++)
				{
					if(Buffer[i]>='0'&& Buffer[i<='9'])
					{
						iCnt++;
					}	
				}	
			}	
			return iCnt;
		}	
		
		
};	
int main()
{
	char fname[30];
	
	cout<<"Enter file name";
	cin>>fname;
	
	Marvellous mobj(fname);
	
	mobj.Display();
	
	iRect=mobj.CountCapital();
	cout<<"Capital letters are"<<iRect;
	
	iRect=mobj.CountDigit();
	cout<<"Digit  are"<<iRect;
	
	iRect=mobj.CountSmall();
	cout<<"small letters are"<<iRect;
	return 0;
}	