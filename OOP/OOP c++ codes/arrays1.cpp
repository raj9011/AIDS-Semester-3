#include<iostream>
using namespace std;

int main(){
	
	int a[3][3];
	int b[3][3];
	
	
	int n=1;
	
	for(int i=0;i<3;i++){
		
		for(int j=0;j<3;j++){
			a[i][j]=n;
			n++;
		}
	}
		cout <<"Values of array :";
		
		for(int i=0;i<3;i++){
			
			for(int j=0;j<3;j++){
				
				cout<<a[i][j]<<" ";
			}		
	    }
}
	
