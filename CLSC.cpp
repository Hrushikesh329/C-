//singly  linkked list circuler 

#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class Singlycl
{
	private:
	PNODE first;
	PNODE last;
	int size;
	
	public:
	Singlycl()//constructor
	{
		first=NULL;
		last=NULL;
		size=0;
	}
	
	void Display()
	{
		PNODE temp=first;
		
		if(first==NULL&&last==NULL)
		{
			return;
		}
		do{
			cout<<temp->data;//100 ch data 10,200->20,300->30,400->40
			temp=temp->next;//200/300/400
		}while(temp!=last->next);	
	}
	int Count()
	{
		return size;
	}
	void insertfirst(int no)
	{
		PNODE newn=new NODE;
		
		newn->data=no;
		newn->next=NULL;
		if(first==NULL&&last==NULL)
		{
			first=newn;
			last=newn;
		}
		else
		{
			newn->next=first;
			first=newn;
		}
		last->next=first;
		size++;
		
	}	
	void insertlast(int no)
	{
		PNODE newn=new NODE;
		
		newn->data=no;
		newn->next=NULL;
		if(first==NULL&&last==NULL)
		{
			return;
		}
		else
		{
			last->next=newn;
			last=newn;
		}
		last->next=first;
		size++;
	}
	void insertatpos(int no,int pos)
	{
	}
	void deletefirst(int no)
	{
		
	}
	void deletelast(int no)
	{
	}
	void deleteatlast(int no)
	{
	}
};

int main()
{		
		int iret=0;
		Singlycl obj;//yete class ch object create kela pn att  pehla constructor call honar class madhla
		
		obj.insertfirst(51);
		obj.insertfirst(21);
		obj.insertfirst(11);
		
		obj.insertlast(101);
		
		obj.Display();
		iret=obj.Count();
		cout<<"Number of element in linklist "<<iret;
		return 0;
}		