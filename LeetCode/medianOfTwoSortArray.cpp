#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    vector<int> a;
    vector<int> b;
    a.push_back(3);
    a.push_back(4);
    b.push_back(2);
    b.push_back(7);

    for(int i=0; i<b.size(); i++){
        a.push_back(b[i]);
    }

    sort(a.begin(),a.end());
    for(int i=0; i<a.size(); i++){
        cout<<a.at(i)<<endl;
    }

    if(a.size()%2==0){
        int idx = a.size()/2;
        double res = (a[idx]+a[idx-1])/2;
        cout<<res; return;
    }else{
        int idx = ceil(a.size()/2);
        double res = a[idx];
        cout<<res;
        return;
    }

    for(int i=0; i<a.size(); i++){
        cout<<a.at(i)<<endl;
    }

    
}