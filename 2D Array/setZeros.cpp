#include<iostream>
using namespace std;




int main(){

    // Approach -->  Using two 2d extra array to mark

    
    int matrix[][3] = {
        {0,1,1},
        {1,1,1},
        {1,1,1}
    };

    int m = sizeof(matrix)/sizeof(matrix[0]);
    int n = sizeof(matrix[0])/sizeof(int);

    int row[m] = {0};
    int col[n] = {0};

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(row[i]==1 || col[j]==1){
                matrix[i][j] = 0;
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}    
    