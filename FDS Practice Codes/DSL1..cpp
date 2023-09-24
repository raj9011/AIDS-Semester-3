#include<iostream>
using namespace std;
class node
{
	public:
	int rollno;
	node *next;	
};
class AIDS
{
	public:
	node *head=NULL;
	*head1=NULL,*head2=NULL,
	*temp,*temp1,*temp2,*t1,*t2;
	node *newnode, *n1, *n2;
	void SEAIDS()
	{
	   int n;
	   cout<<"number of students in class"<<endl;
	   cin>>n;
	   for (int i=1;i<=n;i++)
	   {
	   	newnode=new node();
	   	newnode->rollno=i;
	   	newnode->next=NULL;
	   	if(head==NULL)
	   	{
	   		head=new node;
	   		temp=head;
	  	}
		else
		{
			temp->next=new node;
			temp=temp->next;
		}
	   	
	   }
	}
	void display()
	{
		if(head==NULL)
	{
		cout<<"list is empty";
	}
	else
	{
	temp2=head;
	while(temp2->next!=NULL)
	{
		cout<<temp2->rollno<<endl;
		temp2=temp2->next;
	}
	cout<<temp2->rollno<<endl;
	}
	}
	void vanilla()
	{
		char key='y';
		
		while(key!='n')
	{
		int n;
		cout<<"enter the roll no who likes vanilla"<<endl;
		cin>>n;
		n1=new node();
		n1->rollno=n;
		n1->next=NULL;
		if(head1==NULL)
	{
		head1=n1;
		temp1=head1;
	}
	else
	{
		temp->next=n1;
		temp1=temp1->next;
	}
	cout<<"want to add more vanilla"<<endl;
	cin>>key;
	}
	}
	void Butterscotch()
	{
		char key='y';
		while(key!='n')
	{
		int n;
		cout<<"enter the roll no who likes butterscotch"<<endl;
		cin>>n;
		n2=new node();
		n2->rollno=n;
		n2->next=NULL;
		if(head2==NULL)
	{
		head2=n2;
		temp2=head2;
	}
	else
	{
	    temp2->next=n2;
		temp2=temp2->next;	
	}
	cout<<"want to add more to butterscotch "<<endl;
	cin>>key;
	
		
	}
	}
	void both_vanilla_butterscotch()
	{
		int i=0;
		int vb[4];
		for(t1=head;t1!=NULL;t1=t1->next)
	{
		for(t2=head2;t2!=NULL;t2=t2->next)
	{
		if(t1->rollno==t2->rollno)
	{
		vb[i]=temp1->rollno;
		i++;
		cout<<t1->rollno<<endl;
	}
	
	}
	}
	}
	
	
};
int main()
{
	AIDS obj;
	obj.SEAIDS();
	obj.display();
	obj.vanilla();
	obj.Butterscotch();
	obj.both_vanilla_butterscotch();
}
	
