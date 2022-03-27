#include<iostream>

using namespace std;

class demo
{
	
	int i;//by default access specifier is private
	
	public:
	int x;

	private://not access outside the class
	int y;

	public:
	demo()
	{
		x=10;
		y=20;
		i=30;
	}	
	
	void fun()
	{
		cout<<"inside public fun\n";
		gun();
	}	
	
	private:
	void gun()
	{
		cout<<"inside private\n";
	}	
};

int main()
{
	demo obj;
	
	cout<<obj.x<<"\n";
	//cout<<obj.y<<"\n";//error
	//cout<<obj.i<<"\n";//ERROR
	
	obj.fun();
	//obj.gun();//ERROR
	
	return 0;
}