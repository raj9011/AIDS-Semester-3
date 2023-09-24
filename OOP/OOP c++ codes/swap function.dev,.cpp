#include<iostream>
using namespace std;

int swap (float &x, float &y) {
	float
	t=x;
	x=y;
	y=t;
	
};
int main()
{
	void swap (float &x,float &y);
	float a,b;
	cin>>a>>b;
	cout<<"a="<<a<<"b="<<b<<endl;
	swap(a,b);
	cout<<"a="<<a<<"b="<<b<<endl;
	
}
