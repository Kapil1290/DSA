#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int n; 
    cin>>n;
    int flag=0;
    for(int i=0; i<size; i++){
        if(arr[i]==n){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Element Found...";
    }else{
        cout<<"Not Found!!!!";
    }
}