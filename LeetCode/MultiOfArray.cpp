#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
   
    int suffix[size];
        int prefix[size];
        suffix[size-1] = 1;
        prefix[0] = 1;

        // for prefix--
        for(int i=1; i<size; i++){
            prefix[i]=arr[i-1]*prefix[i-1];
        }

        //for suffix--
        for(int i=size-1; i>0; i--){
            suffix[i-1]=arr[i]*suffix[i];
        }

        for(int i=0; i<size; i++){
            arr[i] = suffix[i] * prefix[i];
        }

        cout<<arr[0]<<endl;
        cout<<arr[1]<<endl;
        cout<<arr[2]<<endl;
        cout<<arr[3]<<endl;




}