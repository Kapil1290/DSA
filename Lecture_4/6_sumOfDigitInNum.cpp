#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter Number: ";
    cin>>num;
    int x = num;
    while(num!=0){

        count = count + num % 10;
        num = num/10;
    }

    cout<<"Sum of digits of "<<x<<" is "<<count;
}