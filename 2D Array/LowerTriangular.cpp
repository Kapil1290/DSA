#include<iostream>
#include<vector>
using namespace std;

int main(){
    int r;
    cin>>r;
    int c;
    cin>>c;
    
    vector<vector<int>> arr(r, vector<int>(c));
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            int temp;
            cin>>temp;
            arr[i][j] = temp;
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i<j){
                arr[i][j] = 0;
            }
        }
    }
    cout<<endl<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}