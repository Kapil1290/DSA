#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,7,3,6,5,6};
    int size = sizeof(arr)/sizeof(int);
    int total = 0;
    for(int i=0; i<size; i++){
        total += arr[i];
    }
    int leftsum = 0;
    for(int i=0; i<size; i++){
        int rightsum = total-leftsum-arr[i];
        if(right)
    }
}