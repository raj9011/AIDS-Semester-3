#include<iostream>
using namespace std;
#include<stdlib.h>

int main ()
{
	int no,i,*ptr,sum=0;
	cout<<"enter elements";
	cin>>no;
	ptr=(int*)calloc(no,sizeof(int));
	if (ptr==NULL)
	{
		cout<<"error in allocating memory";
	//	exit(0);
	}
	cout<<"enter elements";
	for(i=0;i<no;i++)
	{
		cin>>*(ptr+i);
		sum+=*(ptr+i);
	}
	cout<<"sum of element is"<<sum;
	free(ptr);
	
}
