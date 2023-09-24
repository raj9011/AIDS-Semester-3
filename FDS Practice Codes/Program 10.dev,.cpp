#include<iostream>
using namespace std;
#define MAX 20

typedef struct dequeue
{
	int data[MAX];
	int rear,front;
}
dequeue;

void initialize(dequeue *p);
int isEmpty(dequeue *p);
int isFull(dequeue *p);
void enqueueRear(dequeue *p,int x);
int enqueueFront(dequeue *p,int x);
int dequeueFront(dequeue *p);
int dequeueRear(dequeue *p);
void display(dequeue *p);

main()
{
	int i,x,choice,n;
	dequeue q;
	
	initialize(&q);
	do
	{
		
		cout<<"\n 1.Create \n 2.insert(rear) \n 3.insert(front) \n 4.delete(rear) \n 5.delete(front)";
		cout<<"\n 6.display \n 7.exit \n\n enter your choice";
		cin>>choice;
		
		switch(choice)
		{
			case1:
				cout<<"enter no. of elements";
				cin>>n;
				initialize(&q);
				cout<<"\n enter no. of elements";
				for(i=0;i<n;i++)
				{
					cin>>x;
					if(isFull(&q))
					{
						cout<<"\n queue is full";
						
					}
					enqueueRear(&q,x);
					
				}
				break;
		case 2:
			cout<<"\n enter element to be inserted";
			cin>>x;
				if(isFull(&q))
					{
						cout<<"\n queue is full";
						
					}
					enqueueRear(&q,x);
					
				
				break;
		case 3: 
		cout<<"enter element to be inserted";
		cin>>x;
			if(isFull(&q))
					{
						cout<<"\n queue is full";
						
					}
					enqueueFront(&q,x);
					
				
				break;
		
	case 4:
	if(isEmpty(&q));
	{
		cout<<"\n queue is empty";
		
	}
	x=dequeueRear(&q);
	cout<<"\n element deleted"<<x;
	break;
		
		
case 5:if(isEmpty(&q))
{
	cout<<"\n queue is empty";
	
}
x=dequeueFront(&q);
	cout<<"\n element deleted"<<x;
	break;	
case 6:
	display(&q);
	break;
default:break;	
}
	
	}while(choice!=7);
	
}
void initialize(dequeue *p)
{
	p->rear=-1;
	p->front=-1;
	
}

int isEmpty(dequeue *p)
{
	if(p->rear==-1)
	return (1);
	return 0;
}
int isFull(dequeue *p)
{
	if ((p->rear+1)%MAX==p->front)
	return(1);
	return(0);
	
}
void enqueueRear(dequeue *p,int x)
{
	if(isEmpty(p))
	{
		p->rear=0;
		p->front=0;
		p->data[0]=x;
	}
else

{
	
	p->rear=(p->rear+1)%MAX;
	p->data[p->rear]=x;
}
}
void enqueueFront (dequeue *p, int x)
{
	if(isEmpty(p))
	{
		p->rear=0;
		p->front=0;
		p->data[0]=x;
	}
else
{
	p->front=(p->front-1+MAX)%MAX;
	p->data[p->front]=x;
}
}
int dequeueFront(dequeue *p)
{
	if(isEmpty(p))
	{
	int x;
	x=p->data[p->front];
	if(p->rear==p->front)
	initialize(p);
		
	
else

	p->front=(p->front+1+MAX)%MAX;
	return(x);
}

int dequeueRear(dequeue *p)
{
//	if(isEmpty(p))
	
		int x;
		x=p->data[p->rear];
		if(p->rear==p->front)
		initialize(p);
		
	
else

	p->rear=(p->rear-1+MAX)%MAX;
	return(x);
}
void display(dequeue *p)
{
	if(isEmpty(p))
	{
		cout<<"\n queue is empty";
	}
int i;
i=p->front;
while (i!p->rear)
{
	cout<<" "<<p->data[i];
	i=(i+1)%MAX;
}
	cout<<" "<<p->data[p->rear];
}
}

