#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Num a: ";
    cin>>a;
    cout<<"Enter Num b: ";
    cin>>b;

    int res = a>b?a:b;
    cout<<res<<" is greater";
}