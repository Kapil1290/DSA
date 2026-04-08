#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {3,4,-2,5,8,20,-10,8};
    int x=0;
    int maxSum = 0;
    int rsum=0;
    int lsum=0;
    for(int i=0; i<arr.size(); i++){
        maxSum += arr[i];
    }
    cout<<maxSum<<endl;
    
    for(int i=0; i<arr.size(); i++){
        lsum += arr[i];
        rsum = maxSum-lsum;
        if(lsum == rsum){
            cout<<lsum;
            x=1;
        }
    }

    if(x==0){
        cout<<"NOtpossible";
    }


    
}