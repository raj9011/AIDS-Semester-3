#include<iostream>
using namespace std;

int add(int x, int y)
{
	return x+y;
}

double add(double x, double y)
{
	return x+y;
}
int main (){

cout<<"addtion float "<<add(4.0,7.8)<<endl ;
cout<<"add int "<<add(6,8);
return 0;
}
