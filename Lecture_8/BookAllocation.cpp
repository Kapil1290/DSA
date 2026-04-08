#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(){

}

int main(){
    vector<int> arr = {2,3,5,7,8};
    int l=0;
    int h=0;
    // for(int i: arr){
    //     l = max(l, i);
    //     h += i;
    // }
    for(int i=0; i<arr.size(); i++){
        l = max(l, arr[i]);
        h += arr[i];
    }
    cout<<l<<" "<<h;
}