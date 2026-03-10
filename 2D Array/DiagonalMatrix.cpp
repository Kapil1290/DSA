#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int m = sizeof(arr)/sizeof(int);
    int n = sizeof(arr[0])/sizeof(int)*sizeof(int);
    cout<<m<<" "<<n;
}