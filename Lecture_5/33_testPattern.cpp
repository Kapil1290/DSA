#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int m = 2*n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j%2!=0){
                cout<<i;
            }else{
                if(i==n){
                    cout<<n;
                }else {
                    cout<<m-i;
                }
            }
        }

        for(int j=1; j<=m-2*i; j++){
            cout<<" ";
        }

        for(int j=1; j<=i; j++){
            if(j%2!=0){
                // cout<<i;
                cout<<m-i;
            }else{
                if(i==n){
                    cout<<n;
                }else {
                    // cout<<m-i;
                    cout<<i;
                }
            }
        }
        cout<<endl;
    }        

    
    
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=i; j++){
            if(j%2!=0){
                cout<<m-i;
            }else{
                if(i==n){
                    cout<<n;
                }else {
                    cout<<i;
                }
            }
        }
    
        for(int j=m-2*i; j>=1; j--){
            cout<<" ";
        }

        for(int j=1; j<=i; j++){
            if(j%2!=0){
                cout<<i;
                // cout<<i;
            }else{
                if(i==n){
                    cout<<n;
                }else {
                    cout<<m-i;
                    // cout<<m-i;
                }
            }
        }

        cout<<endl;
    }
}