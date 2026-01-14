#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Num a: ";
    cin>>a;
    cout<<"Enter Num b: ";
    cin>>b;
    cout<<"Enter Num c: ";
    cin>>c;

    int res = a>b?a>c?a:c:b>c?b:c;
    cout<<res<<" is greater";
}