#include<iostream>
#include<limits>
#include<string>
#define size 10 
using namespace std;
template<class T>
 
//void yash(T a[size]);
T selection_sort()

{
	T a[10];
	
	T temp;
	for (int i=0;i<10;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for (int i=0;i<10;i++)
	{
		for (int j=i+1;j<10;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\n sorted array";
	
	for (int i=0;i<10;i++)
{
	cout<<a[i]<<endl;	
}
int main()
{
	int a[size];
   selection_sort<int>();
   selection_sort<float>();
   cout<<"enter numbers to be sorted"<<endl;
   cout<<"integer sorting"<<endl;
   cout<<"floating sorting"<<endl;
//	selection_sort<int>();
//	selection_sort<float>();
    return 0;
}


