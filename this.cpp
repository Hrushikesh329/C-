#include<iostream>

using namespace std;

class Demo
{
	public:
	int x;
	int y;
	
	Demo(int a=10,int b=20)//parameterised constructor with default value
	{
		x=a;
		y=b;
	}	
	
	// void fun(Demo *this,int no)
	void fun(int no)
	{
		int j=0;
		j=this->x;
		cout<<j<<".....";
	}	
	
};	

int main()
{	
	Demo obj(11,21);
	
	obj.fun(5);//fun(&obj,51)
	
	return 0;
}	