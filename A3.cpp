#include<iostream>

using namespace std;
class Marvellous
{
	public:
		int Addition(int x,int y)
		{
			int iAns=0;
			iAns=x+y;
			return iAns;
		}	
};	
int main()
{
	int iNo=0,iNo1=0,iRet=0;
	
	Marvellous mobj;
	
	cout<<"Enter first number\n";
	cin>>iNo;
	
	cout<<"Enter Second number\n";
	cin>>iNo1;
	
	iRet=mobj.Addition(iNo,iNo1);
	
	cout<<"Addition is \n"<<iRet;
	
	return 0;
}	