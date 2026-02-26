#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[][4] = {
        {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}
    };

    

    int row = sizeof(arr)/(sizeof(int)*sizeof(int));
    int col = sizeof(arr[0])/(sizeof(int));

    // int i=0,j=0;
    // while(i<row){
    //     if((i+1)%2!=0){
    //         if(i!=0){
    //             j++;   //either this or below j++;
    //         }
    //         while(j<col){
    //             cout<<arr[j][i]<<" ";
    //             j++;
    //         }
    //     }else{
    //         j=j-1;
    //         while(j>=0){
    //             cout<<arr[j][i]<<" ";
    //             j--;
    //         }
    //         // j++;
    //     }
    //     i++;
    // }

    int r,c;
    cin>>r>>c;
    vector<vector<int>> a(4,vector<int>(c));

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
        }
    }
        for(int j=0; j<c; j++){
            if(j%2==0){
                for(int i=0; i<r; i++){
                    cout<<a[i][j]<<" ";
                }
            }else{
                for(int i=r-1; i>=0; i--){
                    cout<<a[i][j]<<" ";
                }
            }
        }
    
}