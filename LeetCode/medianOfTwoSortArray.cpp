#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

vector<int> MergeSort(vector<int> a, vector<int> b){
    
    vector<int> merge;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            merge.push_back(a[i]);
            i++;
        }else{
            merge.push_back(b[j]);
            j++;
        }
    }
    while(i<a.size()){
        merge.push_back(a[i]);
        i++;
    }

    while(j<b.size()){
        merge.push_back(b[j]);
        j++;
    }

    return merge;

}
int main(){
    vector<int> a;
    vector<int> b;
    a.push_back(3);
    a.push_back(5);
    b.push_back(3);
    b.push_back(4);

    // for(int i=0; i<b.size(); i++){
    //     a.push_back(b[i]);
    // }

    // sort(a.begin(),a.end());
    // for(int i=0; i<a.size(); i++){
    //     cout<<a.at(i)<<endl;
    // }

    // if(a.size()%2==0){
    //     int idx = a.size()/2.00;
    //     double res = (a[idx]+a[idx-1])/2.0;
    //     cout<<res; 
    // }else{
    //     int idx = ceil(a.size()/2.0);
    //     double res = a[idx];
    //     cout<<res;
    // }

    // for(int i=0; i<a.size(); i++){
    //     cout<<a.at(i)<<endl;
    // }

    vector<int> m = MergeSort(a,b);
    for(int i=0; i<m.size(); i++){
        cout<<m[i]<<" ";
    }
}