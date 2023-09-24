#include<iostream>
using namespace std;
class B  
{  
 public: int b;  
}; 
class D1 : virtual public B  {  
 public: int d1;
 //{
 //	cout<<"derived class d1"
  // }  
}; 
class D2 : virtual public B  {  
 public: int d2;  
}; 
class D3 : public D1, public D2  {  
 public: int d3;  
}; 
int main()  
{  
 D3 obj;  
 obj.b = 40; //No error
}
