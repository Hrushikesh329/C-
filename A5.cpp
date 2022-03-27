//singly linear in c++

#include<iostream>
using namespace std;

template<class T>
  struct node
{
	T data;
	struct node *next;
};



template <class T>
typedef struct node NODE;
typedef struct *node PNODE;
typedef struct **node PPNODE;

template<class T>
class Singlyll
{
	private:
	PNODE first;
	int Size;
	
	public:
	Singlyll();
	void insertfirst(T);
	void insertlast(T);
	void insertatpos(T,int);
	void deletefirst();
		void deleteatpos(int);
			void deletelast();
				void Display();
					void count();
};	
template<class T>
Singlyll<T>::Singlyll()//constructor
	{
		first=NULL;
		Size=0;
	}
template<class T>	
	void Singlyll<T>::insertfirst(T no)
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
	
	template<class T>
	void Singlyll<T>::insertlast(T no)
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
	template<class T>
	void Singlyll<T>::insertatpos(T no ,int pos)
	{
	
	}
	template<class T>
	void Singlyll<T>::deletefirst()
	{
		PNODE temp=first;
		if(first!=NULL)
		{
			first=first->next;
			delete temp;
			Size--;
		}	
	}
	template<class T>
	void Singlyll<T>::deletelast()
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
			Size++;
		}
		else
		{
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			delete temp->next;
			temp->next=NULL;
			Size--;
		}	
			
		
	}
	template<class T>
	void Singlyll<T>::deleteatpos(int pos)
	{}
	template<class T>
	void Singlyll<T>::Display()
	{
		PNODE temp=first;
		
		while(temp!=NULL)
		{
			cout<<temp->data<<"\t";
			temp=temp->next;
		}
		cout<<"\n";	
	}
	template<class T>
	int Singlyll<T>::count()
	{
		return Size;
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
		Singlyll <int>obj;//oject create
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