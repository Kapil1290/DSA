#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={7,8,2,5,7};
    int minProfit = INT_MAX;
    int maxProfit = 0;

    for(int i=0; i<nums.size(); i++){

        if(nums[i] < minProfit){
            minProfit=nums[i];
        }else{
            if((nums[i]-minProfit)>maxProfit){
                maxProfit=nums[i]-minProfit;
            }
        }
    }
    cout<<maxProfit;
}