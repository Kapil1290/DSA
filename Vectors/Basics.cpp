#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    int val,cap;
    cout<<"Give size of array:- ";
    cin>>cap;
    for(int i=1; i<=cap; i++){
        cin>>val;
        a.push_back(val);
    }

    cout<<a.size()<<endl; // for size
    cout<<a.capacity()<<endl; // for capacity

    // printing of elements
    for(int i=0; i<5; i++){
        cout<<a.at(i)<<" ";
    }
}
    