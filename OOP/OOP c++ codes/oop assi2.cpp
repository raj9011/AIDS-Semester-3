#include<iostream>
#include<string.h>

using namespace std;

Class publication
{
	protected:
	stringtitle;
	float price;
	
	public:
	publication()
	void
	{
		title=" ";
		price=0.0;
		
	}
	publication(string,float p)
	{
		title=t;
		price=p;
		
	}	
};
Class book : public publication
{
	int page count;
	public:
	book()
    {
		pagecount=0;
		
	}
	//After : base class constructor is called
    book(string,floatp,int pc):publication(t,p)

    {
	pagecount=pc;
    }
    voiddisplay()
    {
	cout<<"title :"<<title<<endl;
	cout<<"price :"<<price<<endl;
	cout<<"pagecount :"<<pagecount<<endl;
    }
};
Class CD : public publication
{
	float time;
	public:
	CD()
	{
		time= 0.0;
	
	}
	CD(string,floatp,floattim):publication(t,p)
	{
		time=tim;
	}
	voiddisplay()
	{
    cout<<"title :"<<title<<endl;
	cout<<"price :"<<price<<endl;
	cout<<"time in minutes :"<<time<<endl;	
	}
		
};
int main()
{

	cout<<endl<<"Book data"<<endl;
	book b("C++ ",250,320);
	b.display();
	cout<<endl<<"CD Data"<<endl;
	CD c("programming",110,130.5);
	c.display();
	return 0;
	
}

