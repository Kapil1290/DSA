#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<vector<int>> arr = {{3,2,1},{5,4,3},{9,3,1}};

    for(int j=0; j<arr[0].size(); j++){
        for(int i=0; i<arr.size(); i++){
        sort(arr[i].begin(),arr[i].end());
    }
    }
    
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}