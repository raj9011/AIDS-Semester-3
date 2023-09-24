#include<iostream>
using namespace std;

class Yash
{
	int m;
	public:
		void read(int n)
		{
			m=n;
		}
		int print()
		{
			return m;
		}
};

int main()
{
	Yash obj,
	*objectPointer;
	objectPointer=&obj;
	objectPointer->read(85);
	cout<<objectPointer->print();
	//cout<<obj;
	return 0;
}
