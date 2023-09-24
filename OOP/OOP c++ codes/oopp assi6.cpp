#include<iostream> 
#include<map> 
#include<string> 
using namespace std; 
map<string,int> pop;  
map<string,int>::iterator i; 
void getdata(int n) 
{ 
 int r; 
 string q; 
 for(int i=0;i<n;i++) 
 { 
 cout<<"Enter the State and Population:-"<<endl;  cin>>q>>r; 
 pop.insert(pair<string,int>(q,r)); 
 } 
} 
void display() 
{ 
 for(i=pop.begin();i!=pop.end();i++) 
 {
 cout<<"The State is "<<i->first<<" and the population is:- "<<i->second<<endl;  } 
} 
void search() 
{ 
 string p; 
 cout<<"Enter the State:-"<<endl; 
 cin>>p; 
 
 i=pop.find(p); 
 if (i!=pop.end()) 
 cout<<"State is present and the population is:-"<<i->second<<endl;  else 
 cout<<"State is not their"<<endl; 
 
} 
int main() 
{ 
 int ch,n; 
 while(100) 
 { 
 cout<<"-----------MENU-----------"<<endl; 
 cout<<"1. Press '1' to Insert the Data"<<endl; 
 cout<<"Press '2' to display "<<endl;
 cout<<"Press '3' to search"<<endl; 
 cout<<"Press '4' to exit"<<endl; 
 cout<<"Enter your choice:- "<<endl; 
 cin>>ch; 
 switch(ch) 
 { 
 case 1: 
 cout<<"Enter the number of entries:-"<<endl;  cin>>n; 
 getdata(n); 
 break; 
 case 2: 
 display(); 
 break; 
 case 3: 
 search(); 
 break; 
 case 4: 
 exit(1); 
 break; 
 default: 
 cout<<"wrong choice"<<endl; 
  
 } 
 } 
}

