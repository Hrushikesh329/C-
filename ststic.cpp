#include<iostream>

using namespace std ;

class demo
{
	public:
	
	int i,j;
	
	static int x;//not consider in class size because of static storage class
	
	
	demo()//we cant initialize class variable in constructors 
	{
		cout<<"default constrructor\n";
		i=10;
		j=20;
	}
	
	
};

int demo::x=30;//static variable outside the class //without create onject of class we can access class veriable

int main()
{
	cout<<demo::x<<"\n";
	
	demo obj;
	
	demo obj1;
	
	cout<<sizeof(obj)<<"\n";
	cout<<sizeof(obj1)<<"\n";
	
	cout<<obj.i<<"\n";
	cout<<obj1.i<<"\n";
	
	
	return 0;
}	