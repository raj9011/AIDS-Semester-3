#include<iostream>
#include<string>
using namespace std;
class node
{
	public:
	int prn;
	char name[10];
	node *next;
};

class pinacle
{
	node *head, *newnode,*h1;
	void create()
	{
		cout<<"add a node";
		cin>>key;
		int v1;
		char name;
		newnode=new node;
		cout<<"Enter PRN#";
		cin>>v1;
		cout<<"Enter the name"<<endl;
		cin>>name;
		newnode->prn=v1;
		newnode->name=name;
		newnode->next=NULL;
		if (head=NULL)
	{
		head=newnode;
		h1=head;
		}
	else{
		h1->next=newnode;
		
	};	
	}
	while(key!='n');
	
	void display()
	{
		if (h1=head);
		if (h1==NULL)
		{
			cout<<"linked list is empty"
};
	
};

int main()
{

pinacle p;
p.create();
p.display();
} 
