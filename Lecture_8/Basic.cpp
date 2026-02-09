// # Linear data structure, stores data in heterogeneous manner.
// # Where each element have its index


#include<iostream>
using namespace std;
int main(){
    int x[3];
    
    int a[5] = {1,1,1,1,1};
    int size = sizeof(a)/sizeof(int);
    cout<<"Size is: "<<size<<endl;;
    for(int i=0; i<size; i++){
        cout<<a[i];
    }
    cout<<endl;
    for(int i=0; i<size; i++){
        cout<<a[i]+i;
    }
    
}
