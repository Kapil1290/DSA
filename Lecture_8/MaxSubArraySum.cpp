#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> a = {3,4,-5,8,-12,7,6,-2};

    int maxi = INT_MIN;

    // for(int i=0; i<a.size(); i++){
    //     int pre = 0;
    //     for(int j=i; j<a.size(); j++){
    //         pre += a[j];
    //         maxi = max(maxi, pre);
    //     }
    // }
    // cout<<maxi;


    // Kadane's Algorithm ---

    int pre=0;
    for(int i=0; i<a.size(); i++){
        
        pre += a[i];
        if(pre<0){
            pre=0;    // main logic is here
        }

        maxi = max(maxi, pre);
    }

    cout<<maxi;
}