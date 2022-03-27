#include<iostream>
using namespace std;

void swap(int *P,int *q)
{
	int temp;
	
	temp=*p;
	*p=*q;
	*q=temp;
}	
int main()
{
	int x=0,y=0;
	
	cout<<"enter first number\n";
	cin>>X;
	
	cout<<"enter second number\n";
	cin>>y;
	
	swap(&x,&y);
	cout<<"value of x becomes"<<X<<"\n";
	cout<<"value of x becomes"<<y<<"\n";
	return 0;
}	