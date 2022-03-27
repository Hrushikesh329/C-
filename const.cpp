#include<iostream>

using namespace std;

class constr
{
	public:
	int x;
	
	//constr(int no)
	//{
		//x=no;
	//}	
	void chk()
	{
		if(x%2==0)
		{
			cout<<"it is even";
		}
		else
		{
			cout<<"it is odd";
		}	
	}	
};	

int main()
{
	constr obj(10);
	
	obj.chk();
	
	return 0;
	
}	