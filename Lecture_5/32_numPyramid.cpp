#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=n-i+1; j<=n; j++){
            if(j==10){
                cout<<"0 ";
            }else {
                cout<<j<<" ";
            }
        }
        for(int j=n-1; j>=n-i+1; j--){
            if(j==10){
                cout<<"0 ";
            }else {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}