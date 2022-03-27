#include<iostream>

using namespace std;

class Demo
{
	public:
	int x;
	int y;
	
	Demo(int a=10,,int b=20)//parameterised constructor with default value
	{
		x=a;
		y=b;
	}	
	
};	

int main()
{
	Demo obj1;//by default value 10,20
	
	Demo obj2(20,20);//pass value 20,20
	
	Demo obj3(11);
	
	return 0;
}	