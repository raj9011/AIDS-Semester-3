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
		cin>>arr1[i];
		sum1+=arr1[i];
	}
	for (int i=0;i<t;i++)
	{
	    cin>>arr2[i];
	    sum2+=arr2[i];
	}
	if (sum2 <=sum1)
	cout<< "Yes" <<endl;
	else 
	
	cout<< "NO" <<endl;

	return 0;
}
