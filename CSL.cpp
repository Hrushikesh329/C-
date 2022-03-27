//singly linear in c++

#include<iostream>
using namespace std;

 typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

class Singlyll
{
	private:
	PNODE first;
	int Size;
	
	public:
	Singlyll()//constructor
	{
		first=NULL;
		Size=0;
	}	
	void insertfirst(int no)
	{
		PNODE newn=new NODE;//dynamic
		
		newn->data=no;
		newn->next=NULL;
		
		if(first==NULL)
		{
			first=newn;
		}
		else
		{
			newn->next=first;
			first=newn;
		}
		Size++;
	}
	void insertlast(int no)
	{
		PNODE newn=new NODE;
	PNODE temp=first;
	//newn=(PNODE)malloc(sizeof(NODE));//step1 Allocation the memory
	
	//step 2 initialize the node
	newn->data=no;
	newn->next=NULL;
	
	//step 3 insert the node
	if(temp==NULL)
	{
		temp=newn;
	}	
	else
		{
		while((temp)->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		
		
		}
		Size++;
	}
	void insertatpos(int no ,int pos)
	{
	
	}
	void deletefirst()
	{
		PNODE temp=first;
		if(first!=NULL)
		{
			first=first->next;
			delete temp;
			size--;
		}	
	}
	void deletelast()
	{
		PNODE temp=first;
		
		if(first==NULL)
		{
			return;
		}
		else if(first->next==NULL)
		{
			delete first;
			first=NULL;
			size++;
		}
		else
		{
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			delete temp->next;
			temp->next=NULL;
			size--;
		}	
			
		
	}
	void deleteatpos(int pos)
	{}
	void Display()
	{
		PNODE temp=first;
		
		while(temp!=NULL)
		{
			cout<<temp->data<<"\t";
			temp=temp->next;
		}
		cout<<"\n";	
	}
	int count()
	{
		return Size;
	}
};	
int main()
{
		Singlyll obj;//oject create
		int iret=0;
		
		obj.insertfirst(51);
		obj.insertfirst(21);
		obj.insertfirst(11);
		obj.insertlast(101);
		obj.Display();
		
		iret=obj.count();
		cout<<"number of element"<<iret;
		
		return 0;
}	