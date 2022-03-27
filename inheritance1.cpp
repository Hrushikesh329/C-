#include<iostream>

using namespace std;

class Base
{
	public:
	int x;
	
	private:
	int j;
	
	protected:
	int k;
};	

class B:public A
{
	public:
	int ;
	
	private:
	int ;
	
	protected:
	int ;
};	

class C:public B
{
	
};	

int main()
{
	Derived dobj;
	
	dobj.gun();
	dobj.fun();
	
	
	return 0;
}	