#include<iostream>
using namespace std;
int main(){
    int matrix[][3] = {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };

    int m = sizeof(matrix)/sizeof(matrix[0]);
    int n = sizeof(matrix[0])/sizeof(int);

     for(int i=0; i<m; i++){
        int t1 = 0;
                int t2 = 0;
            for(int j=0; j<n; j++){
                
                if(matrix[i][j]==0){
                    while(t1<m && t2<n){
                        matrix[t1][j] = 0;
                        matrix[i][t2] = 0;
                        t1++;
                        t2++;
                    }
                    
                }
                
            }
            // break;
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    
}    
    