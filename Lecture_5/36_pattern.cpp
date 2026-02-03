#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    n=(n+1)/2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        if(i==1){
            cout<<i<<" ";
            cout<<endl;
            continue;
        }
        for(int j=i-1; j<=i-1; j++){
            cout<<j<<" ";
        }
        for(int j=1; j<=2*i-3; j++){
            cout<<"  ";
        }
        for(int j=i-1; j<=i-1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

        for(int i=n-1; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        if(i==1){
            cout<<i<<" ";
            cout<<endl;
            continue;
        }
        for(int j=i-1; j<=i-1; j++){
            cout<<j<<" ";
        }
        for(int j=1; j<=2*i-3; j++){
            cout<<"  ";
        }
        for(int j=i-1; j<=i-1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}