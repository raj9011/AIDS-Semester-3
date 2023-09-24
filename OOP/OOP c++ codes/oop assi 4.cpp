#include<iostream>
using namespace std;

class publication{
	string title;
	float price;
public:
	void getdata()
	{
	cout<<"\n Enter the book title: \n";
	cin>>title;
	cout<<"\n Enter the book price: \n";
	cin>>price;
	
	}
	
	void putdata()
	{
	cout<<"Title is : "<<title<<endl;
	cout<<"Price is : "<<price<<endl;
		
	}
};
class books : public publication
{
	int pagecount;
	
public: void getdata () {
	cout<<"Enter the page no. :\t"<<endl;
	cin>>pagecount;
//	publication:: getdata();
}
void putdata()
{
cout<<"Page count :"<<pagecount<<"Nos."<<endl;
publication::putdata();

}
};

class tape:public publication
{
public:
	int time;
	void getdata1()
	{
	cout<<"Enter the playing time in minutes : "<<endl;
	cin>>time;
	publication::getdata();
	
	}
	
	void putdata1(){
	cout<<" Time : "<<time<<"min"<<endl;
	publication::putdata();
    }
};

int main()
{
books b;
b.getdata();
b.putdata();
tape t;
t.getdata1();
t.putdata1();

return 0;

}
