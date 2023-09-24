#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int arr1[t];
	int arr2[t];
	int sum1=0;
	int sum2=0;
	for (int i=0;i<t;i++)
	{
		int temp;
		cin>>temp;
		sum1+=temp;
	}
	for (int i=0;i<t;i++)
	{
		int temp2;
	    cin>>temp2;
	    sum2+=temp2;
	}
	if (sum2 <=sum1)
	cout<< "Yes" <<endl;
	else 
	cout<< "NO" <<endl;
	return 0;
}
