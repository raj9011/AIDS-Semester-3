#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream Myfile("abcd.txt");
	
	Myfile<<"this is my file";
	Myfile.close();


string myText;
ifstream MyReadfile("abcd.txt");

while(getline(MyReadfile,myText))

cout<< myText;
}
