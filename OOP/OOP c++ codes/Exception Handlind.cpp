#include<iostream>

using namespace std;

float my_division(int x, int y)
{
	if (y==0)
	{
		throw"cannot divided by 0";
	}
	return (x/y);
}



int main(){
	float x =10;
	float y =0;
	float c;
	
try{
		c=my_division(x,y);
		cout<<c;
	}
	catch(const char* warning)
	{
		
		cerr<<warning;
		
	}
}
