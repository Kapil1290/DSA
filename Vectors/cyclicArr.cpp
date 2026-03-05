#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main() {
	int n; 
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int checktest;
	cin>>checktest;
	int check[checktest];
	for(int i=0; i<checktest; i++){
		cin>>check[i];
	}

	int ones=0,zeroes=0;
	for(int i=0; i<checktest; i++){
		if(check[i]==0){
			zeroes++;
		}else{
			ones++;
		}
	}

	int temp;
	int j=1;
	for(int i=0; i<=n && j<=ones;  i++){
		if(i==0){
			temp = a[i];
			a[i] = a[n-1]+temp;

		}else if(i==n){
			i=-1; j++;
			continue;
		}else{
			int x = temp;
			temp = a[i];
			a[i] = x + a[i];
			
		}
		
	}
	int sum=0;
	for(int i=0; i<n; i++){
		sum += a[i];
	}
	for(int i=1; i<=zeroes; i++){
		sum *= 2;
	}
	int val = pow(10,9)+7;
	cout<<sum%val;
}	