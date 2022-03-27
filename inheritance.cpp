#include<iostream>

class Base
{
	public:
	int x,y;
	
	Base()
	{
		cout<<"inside base class constructor\n";
	}	
	
	~Base()
	{
		cout<<"inside base class destructor\n";
	}	
	
	void fun()
	{
		cout<<"inside base fun\n";
	}	
};	

class Derived:public Base
{
	public:
	int i,j;
	
	Derived()
	{
		cout<<"inside derived class constructor\n";
	}

	~Derived()
	{
		cout<<"inside base class destructor\n";
	}
	
	void gun()
	{
		cout<<"inside derived gun\n";
	}	
};	

int main()
{
	Derived dobj;
	
	dobj.gun();
	dobj.fun();
	
	
	return 0;
}	