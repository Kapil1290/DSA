#include<iostream>

using namespace std;

int main() {
    int mat[][2] = {
        {1,5},
        {3,2}
    };

    int size = sizeof(mat)/sizeof(int);
    int r = sizeof(mat)/sizeof(mat[0]);
    int c = sizeof(mat[0])/sizeof(int);
    // cout<<size;
    int row = 1,col = 4;
    int res[row][col]; 
    
    int arr[row*col];
    int k=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            arr[k++] = mat[i][j];
        }
    }
    k=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            res[i][j] = arr[k++];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<res[i][j]<<" ";
        }
    }


}