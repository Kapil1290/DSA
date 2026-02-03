#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int var = 4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || j==1 || i==n || j==n){
                cout<<"1 ";
            }else {
                if(i==n/2+1 && j==n/2+1){
                    cout<<"6 ";
                }else{
                    if(i==n-1){
                        cout<<var<<" ";
                        var--;
                    }else{
                        cout<<j<<" ";
                    }
                }
            }
        }
        cout<<endl;
    }
}