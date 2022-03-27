//specific char program



#include<iostream>
using namespace std;

void swap(char *p,char *q)//specific function
{
	char temp;
	
	temp=*p;
	*p=*q;
	*q=temp;
}
//generic function
template <class T>
void swapX(T *p,T *q)
{
	T temp;
	
	temp=*p;
	*p=*q;
	*q=temp;
}
	
int main()
{
	char x='\0',y='\0';
	
	cout<<"enter first number\n";
	cin>>x;
	
	cout<<"enter second number\n";
	cin>>y;
	
	swapX(&x,&y);
	cout<<"value of x becomes"<<x<<"\n";
	cout<<"value of x becomes"<<y<<"\n";
	
	int i=11,j=22;
	swapX(&i,&j);
	cout<<"value of i becomes"<<x<<"\n";
	cout<<"value of jbecomes"<<y<<"\n";
	return 0;
}	