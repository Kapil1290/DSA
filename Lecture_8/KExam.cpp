#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,9,5,6,7,8,1};
    int k=3;
    int a=0;
    
    for(int i=0; i<arr.size()/k; i++){
        reverse(arr.begin()+a, arr.begin()+k+a);
        a = a+k;
    }

    reverse(arr.begin()+a, arr.end());

    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}