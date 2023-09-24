#include<iostream> 
using namespace std; 
template<typename T> 

void sort(T a[], int n) 
{ 
 int min,temp, i; 
 for (int i=0; i < n-1; i++) 
 { 
 min = i; 
 for (int j=i+1; j < n; j++) 
 { 
 if (a[j] < a[min]) 
 min=j; 
 } 
 if (min != i) 
 { 
 temp = a[i]; 
 a[i] = a[min]; 
 a[min] = temp; 
 } 
 } 
 //display sorted elements 
 cout<<"\n Sorted elements are :\n"; 
 for(i=0;i<n; i++) 
 cout<<"\t"<<a[i]; 
 } 
 int main() 
 { 
 int n,i; 
 int a[10]; 
 float b[10]; 
 cout<<"\n Selection sort using function template"; 
 cout<<"\n Sorting int numbers"; 
 cout<<"\n Enter how many number wanted to sort";
 cin>>n; 
 for(i=0;i<n;i++) 
 cin>>a[i]; 
 sort<int>(a, n); 
 cout<<"\n Sorting floating point numbers"; 
 cout<<"\n Enter how many number wanted to sort"; 
 cin>>n; 
 for(i=0;i<n;i++) 
 cin>>b[i]; 
 sort<float>(b, n); 
 return 0; 
}


