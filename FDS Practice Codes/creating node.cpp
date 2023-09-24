#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* next;
	
	node(int val)
	{
		data=val;
		next=NULL;
	}
};

void T(node* &head, int val)
{
	node* n= new node(val);
	
	if (head==NULL){
	head=n;
	return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	return;
}
void insertAthead(node* &head,int val)
{
	node* n=new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	n->next=head;
	head=n;
	
}
	bool search(node* head,int key)
	{
		node* temp=head;
		while(temp->next!=NULL){
			if(temp->data==key)
			return true;
			temp=temp->next;
			
		}
		if (temp->data==key){
			return true;
		}
		return false;
	}
void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<NULL<<endl;
}

int main()
{
	node* head=NULL;
	T(head,10);
	T(head,20);
	T(head,30);
	/*insertattail(head,40);
	insertattail(head,55);
	insertattail(head,66);
	display(head);*/
	
	insertAthead(head,0);
	insertAthead(head,-1);
	insertAthead(head,-2);
	insertAthead(head,-3);
	insertAthead(head,-4);
	display(head);
	cout<<search(head,55)<<endl;
	cout<<search(head,3)<<endl;
	cout<<search(head,12)<<endl;
	cout<<search(head,30)<<endl;
	return 0;	
}

