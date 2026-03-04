#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,7,2,3,1};
    int size = sizeof(arr)/sizeof(int);

    for(int i=1; i<size; i++){
        int sort = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>sort){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = sort;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}



