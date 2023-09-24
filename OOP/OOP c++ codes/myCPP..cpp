#include<iostream>
using namespace std;

class rectangle {
	public:
	int length, breadth;
	
	void Area()
	{
	int c;
	c= length*breadth;
	cout<<"area =";
		
	}
};


int main ()
{

rectangle y;
y.length=5;
y.breadth=4;
y.Area();
return 0;
}
