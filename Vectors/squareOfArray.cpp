#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    vector<int> a;
    a.push_back(-4);
    a.push_back(-1);
    a.push_back(0);
    a.push_back(3);
    a.push_back(10);

    for(int i=0; i<a.size(); i++){
        int temp = abs(a[i]);
        a[i] = temp;
    }
    
    sort(a.begin(),a.end());
    
    for(int i=0; i<a.size(); i++){
        int temp = a[i]*a[i];
        a[i] = temp;
    }

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

}