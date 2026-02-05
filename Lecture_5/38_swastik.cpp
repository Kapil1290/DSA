#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n=(m+1)/2;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==1){
                if(j>1&&j<n){
                    cout<<" ";
                }else{
                    cout<<"*";
                }
            }else{
                if(i==n){
                    cout<<"*";
                }else{
                    if(j==1||j==n){
                        cout<<"*";
                    }else{
                        cout<<" ";
                    }
                }
            }
        }
        cout<<endl;
    }
    // cout<<"To be continue...";

        for(int i=n-1; i>=1; i--){
        for(int j=m; j>=1; j--){
            if(i==1){
                if(j>1&&j<n){
                    cout<<" ";
                }else{
                    cout<<"*";
                }
            }else{
                if(i==n){
                    cout<<"*";
                }else{
                    if(j==1||j==n){
                        cout<<"*";
                    }else{
                        cout<<" ";
                    }
                }
            }
        }
        cout<<endl;
    }

}