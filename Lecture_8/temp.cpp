#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	int nums[] = {1,3,2,3,2};
	int val = 3;
	int size = sizeof(nums)/sizeof(int);
    int count=0;
        for(int i=1; i<size; i++){
            if(nums[i]==val){
                count++;
                nums[count]=nums[i];
            }
        }
        cout<<count;
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