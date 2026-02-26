#include<iostream>
using namespace std;
int main(){
    int arr[][4] = {
        {1,5,9,13}, {2,6,10,14}, {3,7,11,15}, {4,8,12,16}
    };

    int row = sizeof(arr)/(sizeof(int)*sizeof(int));
    int col = sizeof(arr[0])/(sizeof(int));

    int i=0,j=0;

    // while(i<row){
    //     while(j<=col){
    //         if(i==0 && j<col){
    //             cout<<arr[i][j]<<" ";
    //             j++;
    //         } else if(j<=(col-1)){
    //             if(i==0){
    //                 j--;
    //             }
    //             i++;
    //             cout<<arr[i][j]<<" ";
    //         } else{
    //             // if(j==4){
    //             //     i--;
    //             // }
    //             j--;
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     i++;
    // }

    int left=0,right=col-1,top=0,bottom=row-1;
    while(left<=right && top<=bottom){
        for(int i=left; i<=right; i++){
            cout<<arr[top][i]<<" ";
        }
        top++;

        for(int i=top; i<=bottom; i++){
            cout<<arr[i][right]<<" ";
        }
        right--;

        if(top<=bottom){
            for(int i=right; i>=left; i--){
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }

        if(left<=right){

            for(int i=bottom; i>=top; i--){
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
    }
}