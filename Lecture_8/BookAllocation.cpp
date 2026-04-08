#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(){

}

int main(){
    vector<int> arr = {2,3,5,7,8};
    int l;
    int h;
    for(int i: arr){
        l = max(l, arr[i]);
        h += arr[i];
    }
}