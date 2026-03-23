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
        {1,2,3,1},
        {4,5,6,4},
        {7,8,9,2}
    };

    int row = arr.size();
    int col = arr[0].size();

    int r=0; 
    int c=0;

    bool up = true;

    while(r < row and c < col){
        if(up==true){
            while(r>0 and c<col-1){
                cout<<arr[r][c]<<" ";
                r--;
                c++;
            }
            cout<<arr[r][c]<<" ";
            if(c==col-1){
                r++;
            }else{
                c++;
            }
        }else{
            while(r<row-1 and c>0){
                cout<<arr[r][c]<<" ";
                r++;
                c--;
            }
            cout<<arr[r][c]<<" ";
            if(r==row-1){
                c++;
            }else{
                r++;
            }
        }
        up=!up;
    }


}