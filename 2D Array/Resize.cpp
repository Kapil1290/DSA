#include<iostream>

using namespace std;

int main() {
    int mat[][3] = {
        {1,2,5},
        {3,4,2}
    };

    int r = sizeof(mat)/(sizeof(int)*sizeof(int));
    int c = sizeof(mat[0])/sizeof(int);
    cout<<r<<" "<<c;
    // int arr[mat.]
}