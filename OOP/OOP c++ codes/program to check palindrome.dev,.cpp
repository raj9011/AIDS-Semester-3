#include<iostream>
using namespace std;

int main()
{
	int num,reverse=0,rem,temp;
	//num=12321;
	cout<<"\n The number is: "<<endl;
	cin>>num; 
	temp=num;
	
	while (temp!=0)
	
	{
		rem=temp%10;
		reverse=reverse*10 + rem;
		temp=temp/10;
	}
	if (num == reverse)
	cout<<"is palindrome"<<endl;
	else 
	cout<<"is not palindrome";
}
