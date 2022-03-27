#include<iostream>

using namespace std;

class Demo
{
	public:
	int i,j;//
	
	static int x;//class veriable
	
	Demo(int a=10,int b=20)//constructor
	{
		cout<<"inside construct";
		
		//(*this).i=a; Allowed
		this->i=a;
		this->j=b;
	}
	//void fun(Demo *this,int no)
	void fun(int no)//instence method
	{
		cout<<"inside fun";
		cout<<this->i<<"\n";
		cout<<this->j<<"\n";
		cout<<Demo::x<<"\n";
	}

	static void gun(int value)//class method
	{
		cout<<"inside ststic gun";
		//cout<<this->i<<"\n";  because of when object create not memory creat for static
	}	
};	

int Demo::x=30;
int main()
{
	cout<<Demo::x<<"\n";//without create object we can access class
	Demo::gun(11);//without create object we can access class
	
	return 0;	
}	