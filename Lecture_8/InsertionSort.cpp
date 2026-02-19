#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,7,2,3,1};
    int size = sizeof(arr)/sizeof(int);
    int val = 0;
    for(int i=1; i<size; i++){

        while(val>=0 && arr[val]>arr[i]){
            val = i; 
            val--;
        }
        
    }
}