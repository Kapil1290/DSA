#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int g=0;
    while(n>0){
        int rem = n%10;
        sum+=rem*pow(2,g);
        g++;
        n=n/10;
    }
    cout<<sum<<endl;
}