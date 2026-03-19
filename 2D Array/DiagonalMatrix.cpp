#include<iostream>
#include<vector>
using namespace std;
int main(){

    // Array creation using simple method 
    // int arr[][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11}
    // };
    // int m = sizeof(arr)/(sizeof(int)*sizeof(int));
    // int n = sizeof(arr[0])/sizeof(int);
    // cout<<m<<" "<<n;


    // Vector creation 

    vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int row = arr.size();
    int col = arr[0].size();

    int r=0; 
    int c=0;

    bool up = true;

    while(r < row and c < col){
        if(up){
            while(r>row and c<col-1){
                cout<<arr[r][c]<<" ";
                r--;
                c++;
            }
        }
    }


}