#include<iostream>
#include<climits>
using namespace std;
int main(){
    int b=INT_MIN;
    cout<<b<<endl;
    int n;
    cin>>n;
    int rem=0;
    while(n){
        rem = 10*rem + n%10;
        n=n/10;
    }
    cout<<rem;
    cout<<endl<<abs(rem);
    // rem=0;
    // for(int i=n; i!=0; i--){
    //     rem = rem + n%10;
    //     n=n/10;
    // }
    // cout<<rem;
}