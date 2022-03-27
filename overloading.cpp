#include<iostream>

using namespace std;

class demo
{
	public:
	int addition(int no,int no2)//addition@2ii  it is name mangling
	{
		int ans=0;
		ans=no+no2;
		return ans;
	}	
	
	int addition(int no,int no2,int no3)//addition@3iii
	{
		int ans=0;
		ans=no+no2+no3;
		return ans;
	}	
	
	int addition(int no,int no2,int no3,int no4)//addition@4iiii
	{
		int ans=0;
		ans=no+no2+no3+no4;
		return ans;
	}	
};	

int main()
{
	demo obj;
	
	int ret=0;
	
	//push 1
	//push 1
	//call 1000 imagnary addres of this 
	ret=obj.addition(1,1);
	cout<<ret<<"\n";
	
	ret=obj.addition(1,1,1);
	cout<<ret<<"\n";
	
	ret=obj.addition(1,1,1,1);
	cout<<ret<<"\n";
	
	return 0;
}	