#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int arr[2][3] = {{2,1,2},{2,34,3}};
	int row = sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(arr[0][0]);
	cout<<sizeof(arr)<<endl;
	cout<<row<<endl;
	cout<<col<<endl;
	string s = "hello";
	cout<<s.at(0);
	return 0;
}