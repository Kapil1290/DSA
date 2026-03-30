#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <climits>
using namespace std;

int main(){ 
    vector<int> a = {2,1,3,4,5};
    int target = 4;
    int r=0;
    int l=0;
    int sum = 0;
    int ans = INT_MIN;
    while(r<a.size()){
        sum += a[r];
        while(sum>=target){
            ans = max(ans, r-l+1);
            
        }
       
        r++;
    }

}