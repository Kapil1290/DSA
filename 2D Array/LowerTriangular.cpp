#include<iostream>
#include<vector>
using namespace std;

int main(){
    int r;
    cin>>r;
    int c;
    cin>>c;
    
    vector<vector<int>> arr(r, vector<int>(c));
    arr[0].push_back(3);
    // cout<<arr[0][0];
    // cout<<arr[0][1];
    cout<<arr[0][2];


    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}