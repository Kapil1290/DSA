#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> a  = {
        {11,2,10,4},
        {2,3,4,4},
        {6,5,7,9}
    };

    int richManIdx=0;
    int income=0;
    int maxIncome=0;
    for(int i=0; i<a.size(); i++){
        income=0;
        for(int j=0; j<a[0].size(); j++){
            income += a[i][j];
        }
        if(maxIncome<income){
            maxIncome=income;
            richManIdx=i;
        }
    }

    cout<<"Richest idx is:- "<<richManIdx+1<<endl;
    cout<<"with amount:- "<<maxIncome;
}