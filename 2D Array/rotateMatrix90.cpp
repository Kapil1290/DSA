#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i=0; i<mat.size(); i++){
        for(int j=i; j<mat.size(); j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    
    for(int i=0; i<mat.size(); i++){
        int j=0, h=mat.size()-1;
        while(j<h){
            int temp = mat[i][j];
            mat[i][j] = mat[i][h];
            mat[i][h] = temp;
            j++; h--;
        }
    }

    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat.size(); j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}