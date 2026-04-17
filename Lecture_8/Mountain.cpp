#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {0,1,6,4,5,1};


    int l=0;
    int h=arr.size();

    while(l<=h){
        int mid = l+(h-l)/2;
        int curVal = arr[mid];
        if(arr[mid-1]>curVal){

        }
    }
}