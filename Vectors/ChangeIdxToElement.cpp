#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> a;
    int temp;
	for(int i=0; i<n; i++){
		cin>>temp;
        a.push_back(temp);
	}
	int val;
	int b[n];
	for(int i=0; i<n; i++){
		val = a[i];
		b[val] = i;
	}

	for(int i=0; i<n; i++){
		cout<<b[i]<<" "; 
	}
}