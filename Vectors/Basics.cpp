#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    int val;
    for(int i=1; i<=5; i++){
        cin>>val;
        a.push_back(val);
    }
    cout<<a.size()<<endl;;
    for(int i=0; i<5; i++){
        cout<<a.at(i)<<" ";
    }

}