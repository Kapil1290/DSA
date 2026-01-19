#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=90 && n<=100){
        cout<<"Grade A";
    } else if(n>=75 && n<90){
        cout<<"Grade B";
    } else if(n>=60 && n<75){
        cout<<"Grade C";
    } else {
        cout<<"Fail";
    }
}