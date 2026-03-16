#include<iostream>
#include<vector>
using namespace std;
int main() {

    int arr[][4] = {
    {1,2,3,4},{12,12,3,4},{45,33,66,7},{1,21,22,13},{14,15,16,17}
    };

    int size = sizeof(arr)/sizeof(int);
    int row = sizeof(arr)/(sizeof(int)*sizeof(int));
    cout<<row<<endl;
    int col = sizeof(arr[0])/sizeof(int);
    cout<<col<<endl;
    // int size = sizeof(arr);
    // cout<<size;
    int arr1[2][3] = {1,2,3,4,5,6};

    // for(int i=0; i<arr.size(); i++){
    //     for(int j=0; j<arr[0].)
    // }

    // vector<vector<int>> a;
    // a.push_back({3,2,3});
    // for(int i=0; i<a.size(); i++){
    //     cout<<a[i];
    // }

    vector<vector<int>> arr = {
        {}
    };
}