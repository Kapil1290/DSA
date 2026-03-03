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

    for(int i=0; i<a.size()-1; i++){
        prefix[i+1] = prefix[i]*a[i];
    }
    

    for(int i=n-2; i>=0; i--){
        suffix[i] = suffix[i+1]*a[i+1];
    }
    for(int i=0; i<n; i++){
        a[i] = prefix[i]*suffix[i];
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}