#include<iostream>
using namespace std;
#include<fstream>
class student
{

	int id;
	int rollno;
	string name;
	int marks;
	public:
		void input()
		{
			cout<<"enter name"<<endl;
			cin>>name;
			cout<<"enter id"<<endl;
			cin>>id;
			cout<<"enter marks"<<endl;
			cin>>marks;
			cout<<"enter roll no"<<endl;
			cin>>rollno;
		}
		void output()
		{
			cout<<" name"<<name<<endl;
			cout<<" id"<<id<<endl;
			cout<<" rollno"<<endl;
			cout<<" marks"<<marks<<endl;
		}
};
int main()
{
	student obj[10];
	fstream f;
	int i,n;
	f.open("student.txt");
	cout<<"Enter the no. of students";
	cin>>n;
	cout<<" info of student";
	for(i=1;i<n;i++)
	{
		cout<<" info of student"<<i<<"\n student";
		obj[i].input();
		f.write((char*)&obj[i],sizeof obj[i]);
	}
	f.close();
	f.open("student.txt",ios::in);
	cout<<"student info is: ";
	for (i=0;i<n;i++)
	{
	f.write((char*)&obj[i],sizeof obj[i]);
	obj[i].input();
	
	
	}
	f.close();
	return 0;	
	
}
