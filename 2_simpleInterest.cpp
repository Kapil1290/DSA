#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter Principal Amount: ";
    cin>>p;
    cout<<"Enter rate: ";
    cin>>r;
    cout<<"Enter Time in years: ";
    cin>>t;

    int si = p*r*t/100;

    cout<<"Simple Interest is: "<<si;
}