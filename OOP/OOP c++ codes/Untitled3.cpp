#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class student
{
	public:
	char name[10];
	char DOB[10];
	int telephone_no;
	int rolno;
	
bool (const student &obj1)
{
	if (rolno ==obj1.rolno)
	
	return 1;
	return 0;
}
bool <(const student &obj1)
{
	if(rolno<obj1.rolno)
	return 1;
	return 0;
}	
}
vector<student>v;
voidprint(student &obj1);
voiddisplay();
voidinsert();
voidsearch();

bool compare(const student &obj1, const student &obj2 )
{
	return obj1.rolno<obj2.rolno;
	
}
int main()
{
	int g;
	do
	{
		cout<<"\n n1.Insert";
		cout<<"\n n2.Display";
		cout<<"\n n3.search";
		cout<<"\n n4.sort";
		cout<<"\n n5.exit";
		cout<<"\n enter your choice";
		cin>>g;
		
		switch(g)
		{
			case1:
				insert();
				break;
			case2:
				display;
				break;
			case3:
				search;
				break;
			case4:
				sort(v.begin(),v.end(),compare);
			cout<<"\n Sorted roll no";
			display();
			break;
			case5:
				exit(0);
				
				
		}
		
	}while(g!=6);
	return 0;
}
void insert() 
{
	student s1;
	cout<<"\n enter student name:";
	cin>>s1.name;
	cout<<"\n enter student DOB:";
	cin>>s1.DOB;
	cout<<"\n enter telephone:";
	cin>>s1.telephone_no;
	cout<<"\n enter student rollno:";
	cin>>s1.rolno;
	obj1.push_back(s1)
}
void display()
{
	for_each(s1.begin(),s1.end(),print);
	
}
void print(student &obj1)
{
    student obj1;
	cout<<"\n";
	cin>>obj1.name<<obj1.name;
	cout<<"\n enter student DOB:"<<obj1.DOB;
	
	cout<<"\n enter telephone:"<<obj1.telephone_no;

	cout<<"\n enter student rollno:"<<obj1.rolno;
	cin>>obj1.rolno;
	obj1.push_back(obj1)	
}
void searh()
{
	vector<student>::iterator i;
	student obj1;
	cout<<"\n enter roll no to be searched";
	cin>>obj1.rolno;
	i=find(obj1.begin(),obj1.end(),obj1);
	
if (i== obj1.end())
{
	cout<<"\n Not found";
	
}
else
{
	cout<<"\n not found";
}
}


