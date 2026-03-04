#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main() {
	// vector<int> a;
	// int n; 
	// cin>>n;
	// int temp;
	// for(int i=0; i<n; i++){
	// 	cin>>temp;
	// 	a.push_back(temp);
	// }
	// int n1;
	// cin>>n1;
	// vector<int> a1;
	// for(int i=0; i<n1; i++){
	// 	cin>>temp;
	// 	a1.push_back(temp);
	// }
    // int n=5;
    // vector<int> a;
    // a.push_back(1);
    // a.push_back(2);
	// a.push_back(1);

    // int n1=2;
    // vector<int> a1;
    // a1.push_back(1);
    // a1.push_back(0);

    // vector<int> newarray;

	// for(int i=0; i<a1.size(); i++){
	// 	int t1=a1[i];
	// 	if(t1!=0){
	// 		for(int i=0; i<a.size(); i++){
    //             int x;
	// 			if(i==0){
    //                 int end=a.size()-1;
	// 				x = a[i]+a[end];
    //                 newarray.push_back(x);
	// 			}else{
	// 				x = a[i]+a[i-1];
    //                 newarray.push_back(x);
	// 			}
	// 			cout<<newarray[i]<<" ";
	// 		}
	// 	}else{
	// 		for(int i=0; i<a.size(); i++){
	// 			int t = newarray[i] + newarray[i];
    //             newarray[i] = t;
	// 			cout<<newarray[i]<<" ";
	// 		}
	// 	}
	// }
    // cout<<endl;
    // int sum=0;
	// for(int i=0; i<newarray.size(); i++){
	// 	sum += newarray[i];
	// }
    // int val = pow(10,9)+7;
    // cout<<sum%val;


	// for(int i=0; i<n; i++){
	// 	int a = (n+i)%n;
	// }

	int n; 
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int x=n+1;
	int b[x];
	for(int i=0; i<n; i++){
		b[i+1] = a[i];
	}
	b[0] = a[x-1];

	for(int i=0; i<x; i++){
		cout<<b[i]<<" ";
	}
}	