#include<iostream>
#include<map>
#include<string>
using namespace std;
map<string,int> a;
map<string,int>::iterator i;

void insert(int n)
{
	string s;
	long int p;
	for(int i=0;i<n;i++)
		{
	
		cout<<"\n Enter state and population:";
		cin>>s>>p;
	
	a.insert(pair<string,int>(s,p));
	}
}

void display()
{
	map<string,int>::iterator k;
	cout<<"\n Elements of map are [";
	for(k=a.begin();
	k!=a.end();
	k++)
	cout<<"("<<k->first<<":"<<k->second<<")"<<",";
	cout<<"]";	
}

void search()
{
	string s;
	cout<<" Enter the state to be searched: ";
	cin>>s;
	
	i=a.find(s);
	if(i!=a.end())	
	{
		cout<<" Entered state is present and its population is"<<i->second<<endl;
	}
	else
	{
	cout<<" Entered state is not present"<<endl;
    }
}

int main()
{
	map<string,int>::iterator i;
	int ch,n;
	while(true)
	{
		cout<<"\n Menu";
		cout<<"\n 1.Insert Info";
		cout<<"\n 2.Display state and population";
		cout<<"\n 3.Find Population";
		cout<<"\n 4.Exit";
		
		cout<<"\n Enter your choice:";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<" Enter the number of entries to be entered:";
				cin>>n;	
				insert(n);
				break;
				
			case 2:
				display();
				break;
				
			case 3:
				search();
				break;	
				
			case 4:
				exit(0);
				break;
			
			
		}
	}
}

