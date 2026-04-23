#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter limit of arrayy:-";
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int cur = arr[0];
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
       cur += arr[i];
       if(cur < 0){
        cur=0;
       }
       ans = max(ans, cur);
    }

    cout<<ans;
    
}