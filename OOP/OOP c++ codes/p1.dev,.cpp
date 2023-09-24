#include<iostream>
using namespace std;

int arr1[]={1200,200,2300,1230,1543};
int arr2[]={12,14,16,18,20};

int temp,result=0;
int main()
{
	for(temp=0;temp<5;temp++)
	{
		result+=arr1[temp];
	}
	for(temp=0;temp<4;temp++)
	{
		result+=arr2[temp];
	}
	cout<<result;
	return 0;
}
