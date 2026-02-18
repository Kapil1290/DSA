#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int arr[] = {2,5,8,9,1};
    int size = sizeof(arr)/sizeof(int);

    for(int i=0; i<size; i++){
        int min = i;
        for(int j=i+1; j<size; j++){
            if(arr[min]>arr[j]){
                min = j;
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}