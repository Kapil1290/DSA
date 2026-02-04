#include<iostream>
#include<cstring>
using namespace std;

int rev(int bin){
        int rem=0;
        while(bin>0){
          int x = bin%10;
          rem = rem*10+x;
          bin=bin/10;
        }
    
     return rem;
    }

int main(){
    int n;
    cin>>n;
    int bin = 0, rem = 0;

    while(n>0){
        rem = n%2;
        bin = bin*10+rem;
        n=n/2;
    }
    rem=0;
    // while(bin>0){
    //     int x = bin%10;
    //     rem = rem*10+x;
    //     bin=bin/10;
    // }
    cout<<rev(bin);
}