#include<iostream>
#include<vector>
using namespace std;

vector<int> generateRow(int num){
    vector<int> a;
    a.push_back(1);
    int res = 1;
    for(int i=1; i<num; i++){
        res = res * (num-i);
        res = res/i;
        a.push_back(res);
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> ans;

    for(int i=1; i<=n; i++){
        ans.push_back(generateRow(i));
    }

    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    } 
}