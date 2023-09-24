#include<iostream>
using namespace std;

class student{
	public:
	int id;
	string name;
	
	void putdetails (int i, string n){
		id=i;
		name= n;
}
		
	void getdetails (){
	cout<<"id "<<id;
	cout<<"name"<<name;
	}
	
};
int main (){
	student s1;
	int s_id;
	string s_name;
	
	cout<<"enter id of student"<<endl;
	cin>>s_id;
	cout<<"enter name of student";
	cin>>s_name;
	
	s1.putdetails(s_id, s_name);
    
	s1.getdetails();
	
	return 0;
}
