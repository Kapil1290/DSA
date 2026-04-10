#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int> arr, int k, int mid){
    int std = 1;
    int sum = 0;
    
    for(int i=0; i<arr.size(); i++){
        if(sum + arr[i] > mid){
            std++;
            sum = arr[i];
            if(std>k){
                return false;
            }
        }else{
            sum += arr[i];
        }
    }
    return true;
}

int main(){
    vector<int> arr = {2,5,7,3,8};
    int k=3;
    int l=0;
    int h=0;
    for(int i: arr){
        l = max(l, i);
        h += i;
    }
    int ans=-1;
    if(k>arr.size())
    return -1;
    while(l<=h){
        int mid = l+(h-l)/2;
        if(isValid(arr,k, mid)){ // mid work as pages
            ans = mid;
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<ans;

}