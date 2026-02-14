#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> bin(int x){
    vector<int> a;
	int i=0;
	int binary = 0;
	while(x>0){
		int rem = x%2;
		a.push_back(rem);
		// cout<<a.at(i);
		x=x/2;
		i++;
	}
	return a;
}

int main() {
	int n;
    cin>>n;
	vector<int> a = bin(n);
	reverse(a.begin(),a.end());
	for(int i=0; i<a.size(); i++){
		cout<<a.at(i);
	}
	return 0;
}