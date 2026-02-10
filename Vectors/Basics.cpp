#include<iostream>
#include<vector>
#include<algorithm>
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

    for(int i=0; i<a.size(); i++){
        cout<<a.at(i)<<" ";
    }

    // a.insert(a.begin(),4);  // begin value is 0

    reverse(a.begin(),a.end());

    // printing of elements
    for(int i=0; i<a.size(); i++){
        cout<<a.at(i)<<" ";
    }
}
    