// # Linear data structure, stores data in heterogeneous manner.
// # Where each element have its index


#include<iostream>
using namespace std;
int main(){
    int a[5] = {10,20,30,40,50};
    int size = sizeof(a)/sizeof(int);
    cout<<"Size is: "<<size<<endl;;
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;;
    }
    
}
