#include<iostream>
using namespace std;
int main(){
    int arr[][4] = {
        {1,5,9,13}, {2,6,10,14}, {3,7,11,15}, {4,8,12,16}
    };

    int row = sizeof(arr)/(sizeof(int)*sizeof(int));
    int col = sizeof(arr[0])/(sizeof(int));

    int i=0,j=0;

    while(i<row){
        while(j<=col){
            if(i==0 && j<col){
                cout<<arr[i][j]<<" ";
                j++;
            } else if(j<=(col-1)){
                if(i==0){
                    j--;
                }
                i++;
                cout<<arr[i][j]<<" ";
            } else{
                // if(j==4){
                //     i--;
                // }
                j--;
                cout<<arr[i][j]<<" ";
            }
        }
        i++;
    }
}