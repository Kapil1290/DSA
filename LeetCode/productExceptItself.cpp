#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> prefix;
    vector<int> suffix;
    vector<int> a;
    int temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp);
    }

    // for prefix---
    prefix.push_back(1);
    suffix[a.size()-1] = 1;
    cout<<suffix[a.size()-1];
    return 0;
}