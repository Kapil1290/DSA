// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main() {
// 	int n;
	// cin>>n;
	// vector<int> a = {1,2,3,4,5,6,7,8,9};
	// int temp;
	// for(int i=0; i<n; i++){
	// 	cin>>temp;
	// 	a.push_back(temp);
	// }
	// int target =10;
	// cin>>target;

	

	// int sum=0;
	// for(int i=0; i<n-2; i++){
	// 	for(int j=i+1; j<n-1; j++){
    //         for(int k=j+1; k<n; k++){
    //             if(a[i]+a[j]+a[k]==target){
    //                 cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<"."<<endl;
    //             }
    //         }
    //     }
	// }

    // for(int i=0; i<n; i++){
    //     int l=i+1;
    //     int h=n-1;
    //     while(l<h){
    //         int curr = a[i]+a[l]+a[h];
    //         cout<<curr<<" ";
    //         if(curr==target){
    //             cout<<a[i]<<" "<<a[l]<<" "<<a[h]<<endl;
    //         }else if(curr>target){
    //             l++;
    //         }else{
    //             h--;
    //         }
    //     }
    // }

    // sort(a.begin(),a.end());

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
    //             // Sum is too small, move left pointer to a larger value
    //             left++;
    //         } 
    //         else {
    //             // Sum is too large, move right pointer to a smaller value
    //             right--;
    //         }
    //     }
    // }



    #include <iostream>
#include <vector>
#include <algorithm> // Required for sort()

using namespace std;

int main() {
    // 1. Setup your data
    vector<int> arr = {12, 3, 4, 1, 6, 9};
    int target = 24;
    int n = arr.size();
    bool found = false;

    sort(arr.begin(), arr.end());

    // 3. The O(n^2) Logic
    for (int i = 0; i < n - 2; i++) {
        
        int left = i + 1;    // Pointer starts right after the 'fixed' element
        int right = n - 1;   // Pointer starts at the very end

        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];

            if (currentSum == target) {
                cout << "Triplet Found: " << arr[i] << ", " << arr[left] << ", " << arr[right] << endl;
               
            } 
            else if (currentSum < target) {
                left++; // Sum is too small, move left pointer to increase it
            } 
            else {
                right--; // Sum is too big, move right pointer to decrease it
            }
        }
        
         // Stop the outer loop if we found the answer
    }

    // 4. Handle the "Not Found" case
    if (!found) {
        cout << "No triplet exists that adds up to " << target << endl;
    }

    return 0;
}
