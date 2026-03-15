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
    cout<<arr[0][0];
}