#include<iostream>
using namespace std;

//int num;
void append (struct node**q,int num)
{
	struct node*temp,*newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
if (*q==NULL)
{
	*q=newnode;
}
else
{
	temp = *q;
	while(temp->next!=NULL)
	temp=temp->next;
	temp->next=newnode;
}
}
