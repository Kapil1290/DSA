#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {2,5,8,9,1};
    int size = sizeof(arr)/sizeof(int);
    cout<<size;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[i] = temp;
            }
        }
    } 

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}