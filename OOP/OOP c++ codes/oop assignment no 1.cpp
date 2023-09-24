#include<iostream>
using namespace std;

class info
{
	public:
	string name;
	int standard;
	string division;
	int DOB;
	string blood_group;
	string address;
	int telephoneno;
	int driving_license;
	
	void input()
	{
		name="yash";
		standard=10;
		division="A";
		DOB=14;
		blood_group="A positive";
		address="baramati";
		telephoneno=9011;
		driving_license=1233;
				
	}
	
	void output()
	{
		cout<<name<<endl;
		//cout<<rollno<<endl;
		cout<<standard<<endl;
		cout<<division<<endl;
		cout<<DOB<<endl;
		cout<<blood_group<<endl;
		cout<<address<<endl;
		cout<<telephoneno<<endl;
		cout<<driving_license<<endl;
		
	}
};
class A
{
	public:
	int rollno,rollno1;
	
	A (int a, int b)
{
	rollno=a;
	rollno1=b;
	cout<<rollno<<" "<<rollno1<<endl;
}



 A(A  & ref) //copy constructor
	{
		rollno =ref.rollno;
		rollno1=ref.rollno1;
		cout<<rollno<<" "<<rollno1;
	}
};
int main ()
{
	info o;
	
	o.input();
	o.output();
	A obj(10,20);

	return 0;
}
