#include<iostream>

using namespace std;


/*class demo
{	
	public:
	int x;
	int y;
	
	demo()
	{
		this->x=10;
		this->y=21; // using default constructor we assign value
	}	
	
	void sum()
	{
		int ans=x+y;
		cout<<ans<<"GAY GANESH";
	}	
};*/


class demo
{
	public:
	int x;
	int y;
	
	demo()
	{
		x=0;
		y=0;
	}	
	demo(demo &a) //dmo &a=obj   using copy constructor we can chang the value
	{
		a.x=10;// obj madhe x la 10 
		a.y=20;//  obj madhw y la 20
		
		y=a.x;//obj2 chy y madhe obj1 ch x chi value
		
		
		
		cout<<a.x<<"Gay Ganesh";
	}	
};	



int main()
{
	demo obj;//pass to default  then &obj pass to default constrctor
	demo obj2(obj);
	
	cout<<obj2.y<<"gay ganesh";
	//obj.sum();  default constructor
	return 0;
}	