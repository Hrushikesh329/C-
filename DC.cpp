#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
	struct node*prev;
	
}NODE,*PNODE;	

class DoublyCL
{
	private:
	PNODE first;
	PNODE last;
	int size;
	
	public:
	DoublyCL()
	{
	first=NULL;
	last=NULL;
	size=0;
	}
	
	void Display();
	int Count();
	void insertfirst(int);
	void insertlast(int);
	void insertAtpos(int,int);
	void deletefirst();
	void deletelast();
	void deleteatpos(int);
};	
//return_value class_name::function_name(parameters)

void DoublyCL::insertfirst(int no)
{
	PNODE neww=new NODE;
	neww->data=no;
	neww->next=NULL;
	neww->prev=NULL;
	
	if((first==NULL)&&(last==NULL))
	{
		first=neww;
		last=neww;
	}
	else
	{
		neww->next=first;
		first->prev=neww;
		first=neww;
	}
	last->next=first;
	first->prev=last;
	size++;
}	

void DoublyCL::insertlast(int no)
{
	PNODE neww=new NODE;
	neww->data=no;
	neww->next=NULL;
	neww->prev=NULL;
	
	if((first==NULL)&&(last==NULL))
	{
		first=neww;
		last=neww;
	}
	else
	{
		
		last->next=neww;
		neww->prev=last;
		last=neww;
	}
	last->next=first;
	first->prev=last;
	size++;
}	
void DoublyCL::Display()
{
	PNODE temp=first;
	
	for(int i=1;i<=size;i++)
	{
		cout<<temp->data<<"|";
		temp=temp->next;
	}	
}	

int DoublyCL::Count()
{
	return size;
}
	
void DoublyCL::deletefirst()
{
	if((first==NULL)&&(last==NULL))
	{
		return ;
	}
	else if((first==last))
	{
		delete first;
		first=NULL;
		last=NULL;
	}
	else
	{
		first=first->next;
		delete (last->next);
		first->prev=last;
		last->next=first;
	}
	
	size--;
}	
void DoublyCL::deletelast()
{
	if((first==NULL)&&(last==NULL))
	{
		return ;
	}
	else if((first==last))
	{
		delete first;
		first=NULL;
		last=NULL;
	}
	else
	{
		last=last->prev;
		delete last->next;
		first->prev=last;
		last->next=first;
	}

	size--;
}	
void DoublyCL::insertAtpos(int no,int ipos)
{
	if((first==NULL)&&(last==NULL))
	{
		return;
	}
	 if(ipos==1)
	{
		insertfirst(no);
	}
	else if(ipos==size+1)
	{
		insertlast(no);
	}
	else
	{
		PNODE neww=new NODE;
		
		neww->data=no;
		neww->next=NULL;
		neww->prev=NULL;
		
		PNODE temp=first;
		
		for(int i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		neww->next=temp->next;
		neww->prev=temp;
		temp->next->prev=neww;
		temp->next=neww;
		size++;
	}	
	
}

void DoublyCL::deleteatpos(int ipos)
{
	if((ipos<1)||(ipos>size))
	{
		return;
	}
	if(ipos==1)
	{
		deletefirst();
	}
	else if(ipos==size)
	{
		deletelast();
	}
	else
	{
		PNODE temp=first;
		for(int i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		delete temp->next->prev;
		temp->next->prev=temp;
	}	
}	
int main()
{
	DoublyCL obj;
	
	obj.insertfirst(21);
	obj.insertfirst(11);
	
	obj .insertlast(51);
	obj.insertlast(101);
	
	obj.insertAtpos(75,3);
	
	int iret=obj.Count();
	cout<<"count is"<<iret<<"\n";
	
	obj.Display();
	return 0;
}	