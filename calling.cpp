#include<iostream>

using namespace std;

void callvalue(int no)//no madhe 10
{
	no++;
}	


void calladdress(int *p)//address ala p madhe
{
	(*p)++;
}

void callreferance(int &ref)//int &ref=c  c la topen name honar ref
{
	ref++;
}	

int main()
{
	int a=10,b=10,c=10;
	
	callvalue(a);//10 pass hoto
	cout<<a<<"\n";//10
	
	callreferance(c);//nav pass hot
	cout<<c<<"\n";//11
	
	calladdress(&b);//address pass hoto
	cout<<b<<"\n";//11
	
	return o;
}	