#include<iostream>
#define SIZE 4
using namespace std;

void enqueue(int y);
void dequeue();
void display();

int FRONT=-1;
int REAR=-1;
int QUEUE[SIZE];
main()
{
	int y,ch;
		while(1)
	{
		cout<<" add job"<<endl;
		cout<<" display"<<endl;
		cout<<" enter ur choice"<<endl;
		cin>>ch;
		switch(ch)
	{
		case 1:
			cout<<"enter job"<<endl;
			cin>>y;
			enqueue(y);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			
			}		
	}
	
	
}

void enqueue(int y)
{
	if(REAR>=SIZE-1)
	cout<<"queue is overflow"<<endl;
	else
	{
		REAR=REAR+1;
		QUEUE[REAR]=y;
		
		if(FRONT==-1)
	FRONT=0;
	}
}

void dequeue()
{
	if(FRONT==-1)
	cout<<"queue is underl"<<endl;
	else
	{
	cout<<"deleted element is"<<QUEUE[FRONT]<<endl;
	if(FRONT==REAR)
	{
		FRONT=-1;
		REAR=-1;
	}
	else
	{
		FRONT+=1;
	}
	}
}



void display()
{
	int i;
	if(FRONT==-1)
	cout<<"queue is empty"<<endl;
	else 
	{
		for(i=FRONT;i<=REAR;i++)
		cout<<" "<<QUEUE[i];
	}
}

