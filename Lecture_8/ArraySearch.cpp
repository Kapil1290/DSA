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
    int idx;
    for(int i=0; i<size; i++){
        if(arr[i]==n){
            idx=i+1;
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Element Found...At position:- "<<idx;
    }else{
        cout<<"Not Found!!!!";
    }
}