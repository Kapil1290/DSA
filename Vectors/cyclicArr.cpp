#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> a;
	int n; 
	cin>>n;
	int temp;
	for(int i=0; i<n; i++){
		cin>>temp;
		a.push_back(temp);
	}
	int n1;
	cin>>n1;
	vector<int> a1;
	for(int i=0; i<n1; i++){
		cin>>temp;
		a1.push_back(temp);
	}

	for(int i=0; i<a1.size(); i++){
		int t1=a1[i];
		if(t1!=0){
			for(int i=0; i<a.size(); i++){
				if(i==0){
					a[i] = a[i]+a[a.size()-1];
                    cout<<a[i]<<endl;
				}else{
					a[i] = a[i]+a[i-1];
				}
			}
		}else{
			for(int i=0; i<a.size(); i++){
				a[i] = a[i] + a[i];
			}
		}
	}

	for(int i=0; i<a.size(); i++){
		cout<<a[i]<<" ";
	}


}	