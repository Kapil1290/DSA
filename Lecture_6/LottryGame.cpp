#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    if(n>=300 && n<=460){
        cout<<"Ohhh!!! You won MacBook"<<endl;
    } else if(n>=200 && n<=280){
        cout<<"You won KureKure"<<endl;
    } else if(n>=1100 && n<=1500){
        cout<<"You won Cycle"<<endl;
    } else if(n>=50 && n<=80){
        cout<<"You won Bike"<<endl;
    } else{
        cout<<"Best Luck next time!!!!!!"<<endl;
    }
}