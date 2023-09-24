#include<iostream>
#include<vector>
using namespace std;

class student{
	public:
		int rno;
		char name[20];
};

vector<student> rec;

int main()
{
	student ob;
	cout<<"\n enter value of rno and name";
	cin>>ob.rno>>ob.name;
	
	rec.push_back(ob);
	
	for (int i=rec.begin();)
}
