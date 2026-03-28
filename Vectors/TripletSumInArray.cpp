#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> a = {1,2,3,4,5,6,7,8,9};
	int temp;
	for(int i=0; i<n; i++){
		cin>>temp;
		a.push_back(temp);
	}

	int target =10;
	cin>>target;

	

	int sum=0;
	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(a[i]+a[j]+a[k]==target){
                    cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<"."<<endl;
                }
            }
        }
	}

    for(int i=0; i<n; i++){
        int l=i+1;
        int h=n-1;
        while(l<h){
            int curr = a[i]+a[l]+a[h];
            cout<<curr<<" ";
            if(curr==target){
                cout<<a[i]<<" "<<a[l]<<" "<<a[h]<<endl;
            }else if(curr>target){
                l++;
            }else{
                h--;
            }
        }
    }

    sort(a.begin(),a.end());

    // for (int i = 0; i < n - 2; i++) {
        
    //     // Two-pointer pointers
    //     int left = i + 1;
    //     int right = n - 1;

    //     while (left < right) {
    //         int currentSum = a[i] + a[left] + a[right];
    //         cout<<currentSum<<" ";
    //         if (currentSum == target) {
    //             cout << "Triplet found: " << a[i] << ", "<< a[left] << ", " << a[right] << endl;
    //         } 
    //         else if (currentSum < target) {
    //             left++;
    //         } 
    //         else {
    //             right--;
    //         }
    //     }
    // }

}
