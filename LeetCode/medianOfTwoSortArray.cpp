#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    vector<int> b;
    a.push_back(1);
    a.push_back(2);
    b.push_back(3);
    b.push_back(4);

    for(int i=0; i<b.size(); i++){
        a.push_back(b[i]);
    }

    for(int i=0; i<a.size(); i++){
        cout<<a.at(i)<<endl;
    }
}