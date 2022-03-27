#include<iostream>

using namespace std;

float area(float fradious,float pi=3.14)
{
	float ans=0.0;
	ans=pi*fradious*fradious;
	return ans;
	
}	

int main()
{
	float fret=0.0;
	
	fret=area(10.4,7.2);//pi value pass 7.2
	cout<<fret<<"\n";
	
	fret=area(10.4);//default value for pi 3.4
	cout<<fret<<"\n";
	return 0;
}	