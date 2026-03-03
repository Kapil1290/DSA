#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prefix[n];
    int suffix[n];
    vector<int> a;
    int temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp);
    }
    int m = a.size()-1;
    // for prefix---
    prefix[0] = 1;
    suffix[m] = 1;

    
    return 0;
}