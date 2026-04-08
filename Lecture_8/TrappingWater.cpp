#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
int main(){
    vector<int> arr = {4,2,0,5,2,6,2,3};

    int leftMax[arr.size()];
    int rightMax[arr.size()];

    leftMax[0]=0;
    for(int i=1; i<arr.size(); i++){
        leftMax[i] = max(arr[i-1], leftMax[i-1]);
    }

    rightMax[arr.size()-1] = 0;
    for(int i=arr.size()-2; i>=0; i--){
        rightMax[i] = max(arr[i+1], rightMax[i+1]);
    }

    for(int i=0; i<arr.size(); i++){
        cout<<leftMax[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<rightMax[i]<<" ";
    }
    cout<<endl;


    for(int i=0; i<arr.size(); i++){
        int m = min(leftMax[i], rightMax[i]);
        int ans = m-arr[i];
        if(ans<=0){
            cout<<"0"<<" ";
        }else{
            cout<<ans<<" ";
        }
    }
}