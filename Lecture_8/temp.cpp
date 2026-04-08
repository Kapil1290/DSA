#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	vector<int> nums = {4,3,2,7,8,2,3,1};
	int val = 3;
	int size = sizeof(nums)/sizeof(int);
    int count=0;
        for(int i=0; i<size; i++){
            if(nums[i]!=val){
				nums[count]=nums[i];
				count++;
			}
        }
        cout<<count;

	// for(int i=0; i<nums.size(); i++){
	// 	int idx = abs(nums[i])-1;
	// 	if(nums[idx]>0){
	// 		nums[idx] = -nums[idx];

	// 	}
	// }

	// for(int i=0; i<nums.size(); i++){
	// 	if(nums[i]>0){
	// 		cout<<i+1<<" ";
	// 	}
	// }

	vector<int> a = {4,-6,2,8};

	for(int i=0; i<a.size(); i++){
		for(int j=0; j<=i; j++){
			cout<<a[j]<<" ";
		}
		
	}

	
}


// int arr[2][3] = {{2,1,2},{2,34,3}};
// 	int row = sizeof(arr)/sizeof(arr[0]);
// 	int col = sizeof(arr[0])/sizeof(arr[0][0]);
// 	cout<<sizeof(arr)<<endl;
// 	cout<<row<<endl;
	// cout<<col<<endl;
	// string s = "hello";
	// cout<<s.at(0);
	// return 0;