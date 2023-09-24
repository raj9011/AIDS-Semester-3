#include <iostream>
using namespace std;

class complex
{
	private:
		float real;
		float img;
	public:
		complex(float r=0,float i=0)
	{
		real=r;
		img=i;
	}
complex operator+ (complex&);
complex operator- (complex&);
complex operator* (complex&);

friend ostream&operator<<(ostream&out,complex&loc);
friend istream&operator>>(istream&inp,complex&loc);

};
ostream&operator<<(ostream&out,complex&loc)
{
	if(loc.img>=0)
	out<<"\n"<<loc.real<<"+"<<loc.img<<"i";
	else
	out<<"\n"<<loc.real<<loc.img<<"i";
	return(out);
	
} 
istream&operator>>(istream&inp,complex&loc)
{
	cout<<"\nEnter real part of complex number\t";
	inp>>loc.real;
    cout<<"\nEnter imaginary part of complex number\t";	
    inp>>loc.img;
    return(inp);
    
}
complex complex :: operator + (complex& l)
{
	complex temp;
	temp.real = real + l.real;
	temp.img= img + l.img;
	return(temp);
	
	}	
complex complex :: operator - (complex& l)
{
	complex temp;
	temp.real = real - l.real;
	temp.img= img - l.img;
	return(temp);
}
complex complex :: operator * (complex& l)
{
	complex temp;
	temp.real = (real*l.real)+ (img* l.img*-1);
	temp.img= (img*l.real)+(l.img*real);
	return(temp);
}
int main()
{
	complex c1,c2,c3;
	cin>>c1;
	cout<<c1;
	cin>>c2;
	cout<<c2;
	
	c3=c1+c2;
	cout<<"\nAddition Result\t"<<c3;
	c3=c1*c2;
	cout<<"\nMultiplication Result\t"<<c3;
	
}
	
	

