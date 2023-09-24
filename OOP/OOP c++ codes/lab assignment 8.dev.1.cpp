#include<iostream>
#include<map>
#include<string>
using namespace std;
map<string,int> a;

void insert()
{
	string s;
	int p;
	cout<<"\n enter state and population of it";
	cin>>s>>p;
	a.insert(pair<string,int> (s,p));
	
}
void display()
{
	map<string,int>::iterator k;
	cout<<"element of map are [";
	for(k=a.begin();k!=a.end();k++)
	cout<<"{"<<k->first<<":"<<k->second<<"}"<<",";
	
}
int main()
{
	map<string,int> m;
	map<string,int>::iterator  i;
	int n;
	
	while(true)
	{
	cout<<"\n menu";
	cout<<"\n 1. insert info";
	cout<<"\n 2. display state & population";
	cout<<"\n 3. find population";
	cout<<"\n 4. exit ";
	     
	cout<<"\n enter your choice";
	cin>>n;

	}
	switch(n)
	{
	case 1:
	insert();
	break;
	case 2:
	display();
	break;
	case 3:
	exit(0);
	break;
	}	
	return 0;
	
}

