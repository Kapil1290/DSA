
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {22,-5,6,2,5};
    int max = 0;
    int size = sizeof(arr)/sizeof(int);  // return # of values in array
    for(int i=0; i<size-1; i++){
        if(arr[max]<arr[max+1]){
            max++;
        }
    }
    cout<<"Max. val is: "<<arr[max]<<endl;;

    int min = 0;
    for(int i=0; i<size-1; i++){
        if(arr[min]>arr[min+1]){
            min++;
        }
    }
    cout<<"Min. val is: "<<arr[min]<<endl;;

    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
        cout<<arr[i];
    }
    cout<<"Sum is: "<<sum;

    return 0;
}