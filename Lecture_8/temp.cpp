#include<iostream>
#include<vector>
using namespace std;

int main() {
	int val;
	int cas;
	cin>>cas;
	vector<int> a;
	for(int i=0; i<2*cas; i++){
		cin>>val;
		a.push_back(val);
	}
	int val1 =0;
	int val2= 0;
	cout<<a.size();
	for(int i=0; i<a.size(); i=i+2){
		int x = a.at(i);
		int y = a.at(i+1);
		int tem1=1;
		int tem2=1;
		while(x!=tem1 || y!=tem2){
			if(tem1%2!=0){
				val1=val1+tem1;
				tem2++; 
			}
			if(tem2%2==0){
				val2=val2+tem2;
				tem1++;
			}
			
		}
		if(val1>val2){
			cout<<"Aayush";
		}else{
			cout<<"Harshit";
		}

	}
	
}


// int arr[2][3] = {{2,1,2},{2,34,3}};
	// int row = sizeof(arr)/sizeof(arr[0]);
	// int col = sizeof(arr[0])/sizeof(arr[0][0]);
	// cout<<sizeof(arr)<<endl;
	// cout<<row<<endl;
	// cout<<col<<endl;
	// string s = "hello";
	// cout<<s.at(0);
	// return 0;