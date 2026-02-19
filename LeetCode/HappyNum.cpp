#include<iostream>
using namespace std;

int sum(int n){
    int sum=0;
    while(n!=0){
        int rem = n%10;
        sum+=rem*rem;
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    while(n!=1 && n!=4){
        n= sum(n);
    }
    if(n==1){
        cout<<"Happy Number";
    }else{
        cout<<"Not happpy number";
    }
}