#include<iostream>

using namespace std;

int main()
{
			
	int no=11;
	
	int &x=no;// X is referance to integer now it contains no

	int *p=&no;//in this ther is adresss

	int *(&q)=p;//pointer in referancecout<<"value of x"<<obj2.x<<"\n";
	
	return 0;
}	


/*
no 11
x 11
&no 100
%x 100
sizeof no 4
sizeof x  4
sizeof p 8
p 100
*p 11

*/