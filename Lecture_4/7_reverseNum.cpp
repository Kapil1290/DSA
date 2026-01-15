#include<iostream>
using namespace std;

int main(){
    int num,count=0,rem=0;
    cout<<"Enter Number: ";
    cin>>num;

    while(num!=0){
        rem = 10*rem + num%10;
        num = num/10;
    }
    cout<<rem;
}