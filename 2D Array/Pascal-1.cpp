#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n;
    cin>>r;
    int res=1;
    for(int i=0; i<r; i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    cout<<res<<endl;

    return 0;
}