#include<iostream>
using namespace std;
int main(){

    int arr[] = {22,5,6,2,5};
    int max = 0;
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size-1; i++){
        if(arr[max]<arr[max+1]){
            max++;
        }
    }
    cout<<arr[max];
}