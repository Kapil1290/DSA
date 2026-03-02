#include<iostream>
using namespace std;
int ncr(int n, int r){
    int res=1;
    for(int i=0; i<r; i++){
        res = res*(n-i);
        res = res/(i+1);
        
    }
    return res;
}
int main(){
    int row = 5;
    for(int i=1; i<=row; i++){
        cout<<ncr(row-1,i-1)<<endl;
    }
}