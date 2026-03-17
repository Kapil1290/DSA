#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n=13;
    int m=(n+1)/2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i<m){
                if(j%2!=0){
                   cout<<"*";
                }else{
                   cout<<" ";
                }
            }else if(i==m){
                cout<<"*";
            }else{
                if(j==(m/2+1)){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}