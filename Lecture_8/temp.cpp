#include<iostream>
using namespace std;

int main(){

	int cas;
	cin>>cas;
	int sum=0;
	long long arr[cas];
	for(int i=0; i<cas; i++){
		cin>>arr[i];
	}
	for(int i=0; i<cas; i++){
		sum=0;
		long long temp = arr[i];
		while(temp!=0){
			int rem = temp%10;
			sum = sum + rem;
			temp=temp/10;
		}
		if(sum%2==0){
			if(sum%4==0){
				cout<<"Yes"<<endl;
			}else{
				cout<<"No"<<endl;
			}
		}else{
			if(sum%3==0){
				cout<<"Yes"<<endl;
			}else{
				cout<<"No"<<endl;
			}
		}
	}

	return 0;
}