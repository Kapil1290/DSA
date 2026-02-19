#include<iostream>
#include<vector>
using namespace std;
int check(){
    int arr[] = {2,3,-1,8,4};
    int size = sizeof(arr)/sizeof(int);
    int total = 0;
    for(int i=0; i<size; i++){
        total += arr[i];
    }
    int leftsum = 0;
    for(int i=0; i<size; i++){
        int rightsum = total-leftsum-arr[i];
        if(rightsum==leftsum){
            return i;
        }
        leftsum+=arr[i];
    }
    return -1;
}
int main(){
    int x = check();
    cout<<x;
}