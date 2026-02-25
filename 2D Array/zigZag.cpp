#include<iostream>
using namespace std;
int main(){
    int arr[][4] = {
        {1,5,9,13}, {2,6,10,14}, {3,7,12,15}, {4,8,12,16}
    };

    int row = sizeof(arr)/(sizeof(int)*sizeof(int));
    int col = sizeof(arr[0])/(sizeof(int));

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}