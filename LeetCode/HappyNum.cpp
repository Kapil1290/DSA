#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int check=n;
    int sqr=0;
        int flag=0;
        while(sqr!=1){
            sqr=0;
            while(n!=0){
                int rem = n%10;
                sqr = sqr+(rem*rem);
                n/=10;
            }
            n=sqr;
            flag++;
            if(flag==check){
                cout<<"false";
            }
        }
        cout<<"true";
}