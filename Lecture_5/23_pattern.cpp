#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    // int m=(n+1)/2;
    int x=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"\t";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<x<<"\t";
            x++;
        }
        cout<<endl;
    }
}