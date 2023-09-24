#include<iostream>
using namespace std;

class grandparent{
	public:
	string name;
	
	void get_name(string n){
	
	name=n;
}
    void put_name (){
	cout<<"enter name"<<name<<endl;
}
};

class parent:public grandparent{
	public:
	int age;
	
	void get_age( int i){
		age=i;
	}

	void put_age(){
	cout<<"enter age"<<age<<endl;
	
	}

};

class child:public parent{
	public:
	string gender;

	
	void get_gender( string g){
	gender=g;
	}
		
	void put_gender (){
	cout<<"enter gender"<<gender<<endl;
	
	}
};

int main(){


	child y;
	y.get_name("yash");
	y.get_age(25);
	y.get_gender("male");
	
    y.put_age();
    y.put_gender();
    y.put_name();
	
	return 0;
	
}
