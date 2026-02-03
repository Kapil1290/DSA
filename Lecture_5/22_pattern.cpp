#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int m=(n+1)/2;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}