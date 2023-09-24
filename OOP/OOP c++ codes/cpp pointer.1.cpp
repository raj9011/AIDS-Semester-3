#include<iostream>
using namespace std;

int add(int x,int y){
		return x+y;
} 
int main (){
	string name = "Yash ";
	string* ptr = &name;
	cout<<"Adress in variable "<<name<<endl;
	cout<<"Adress of variable "<<ptr<<endl;
	cout<<"Adress of variable "<<&name<<endl ;
    cout<<add(3,7);
		
	
	
	return 0;
}

 
