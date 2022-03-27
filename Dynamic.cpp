#include<iostream>

using namespace std;

int main()
{
	int Arr[10];//static
	
	int *p=NULL;
	
	//p=(int *)malloc(10*sizeof(int));//c dynamic memory malloc return void * the we use typecast concept i.e int*
	
	p=new int[10];//c++ dynamic memory
	
	//free(p);
	delete []p;//[] to convy its a array to compiler 
	return 0;
}	