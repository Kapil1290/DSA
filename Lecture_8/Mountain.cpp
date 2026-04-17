#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {0,3,8,9,5,2};
    // vector<int> arr = {0,10,5,2};


    int l=0;
    int h=arr.size();

    while(l<=h){
        int mid = l+(h-l)/2;
        int curVal = arr[mid];
        if(arr[mid-1]>curVal){
            h = mid-1;
        }else if(arr[mid+1]> curVal){
            l = mid+1;
        }else{
            cout<<arr[mid]; break;
        }
    }
}