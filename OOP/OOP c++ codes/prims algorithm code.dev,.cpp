#include<iostream>
using namespace std;
#include <iomanip>
//#include <graph>
#define UNSEEN 0
#define FRINGE 1
#define INTREE 2

struct node{
	int vertex;
	node * next;
};

void insertatbeginning (node ** fringelist, int d)
{
	node *ptr;
	ptr=new node;
	ptr->vertex=d;
	ptr->next=*fringelist;
	*fringelist=ptr;
}

void deleteElement(node ** fringelist, int d)
{
	node *loc, *ploc=NULL;
	ploc= NULL;
	loc=*fringelist;
	while (loc->vertex!=d)
	{
		ploc=loc;
		loc=loc->next;
	}
	if (ploc==NULL)
	*fringelist = (*fringelist)->next;
	else
	ploc->next=loc->next;
	delete loc;
}
int isEmpty (node *ptr)

{
	return (ptr==NULL);
}
void deletelist(node **fringelist)
{
	node *ptr;
	while (*fringelist !=NULL)
	{
		ptr=*fringelist;
		*fringelist = (*fringelist)->next;
		delete ptr;
	}
}

void WeightedGraph ()
{
//	int *ptr1;
	node *fringelist=NULL, *ptr2;
  int MAX,size,	WNode, *ptr1;
	int i,x,stuck,w,edgecount,minWt,y,weight;
	int parent [MAX], status[MAX],fringeWt[MAX];
	for (i=1;i<=size;i++)
	status [i]= UNSEEN;
	x=1;
	status[x]= INTREE;
	edgecount = 0;
	stuck = 0;
	while ((edgecount < size) && (!stuck))

//void MSTprim()
{
	ptr1 = adj[x];
	while (ptr1 != NULL){
		y=ptr1->vertex;
		weight = ptr1->weight;
		if ((status [y] == FRINGE ) && (weight < fringeWt[y]))
		{
			parent[y]= x;
			fringeWt[y]=weight;
		}else if (status[y]==UNSEEN) {
			status[y]= FRINGE;
			parent[y]= x;
			fringeWt[y]=weight;
			insertatbeginning (&fringelist,y);
		}
		if (isEmpty (fringelist))
		stuck = 1;
		else 
		{
			x=fringelist->vertex;
			minWt=fringeWt[x];
			ptr2 = fringelist->next;
			while (ptr2 !=NULL)
			{
				w=ptr2->vertex;
				if (fringeWt[w] <minWt)
				{
					x=w;
					minWt= fringeWt[w];
				}
				ptr2=ptr2->next;
			}
			deleteElement(&fringelist,x);
			status[x]=INTREE;
			edgecount++;
		}
	}
	for (x=2;x<=size;x++)
	cout<<"("<<x <<","<< parent[x] <<")";
	deletelist (&fringelist);
}


int main()
{
	int n;
	cout<<"/n enter number of nodes in the graph";
	cin>>n;
	weightedGraph wgraph(n);
	wgraph.inputGraph();
	cout<< "\n \n minimum spanning tree";
	cout<< "constitutes following edges \n\n";
	wgraph.MSTprim();
	return 0;
}







