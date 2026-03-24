// #include<iostream>
// using namespace std;
// int main(){
//     int n,r;
//     n=4;
//     r=3;
//     int res=1;
//     for(int i=0; i<r; i++){
//         res = res*(n-i);
//         res = res/(i+1);
//     }
//     cout<<res<<endl;

//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     vector<vector<int>> a;
//     if(r==0){
//         return 0;
//     }
//     a.push_back(vector<int>(1,1));
//     cout<<1;
//     cout<<endl;
//     for(int i=1; i<r; i++){
//         vector<int> cur;
//         cur.push_back(1);
//         cout<<1<<" ";
//         for(int j=1; j<i; j++){
//             int val = a[i-1][j-1]+ a[i-1][j];
//             cur.push_back(val);
//             cout<<val<<" ";
//         }
//         cur.push_back(1);
//         cout<<1<<" ";
//         cout<<endl;
//         a.push_back(cur);
//     }

//     // for(int i=0; i<r; i++){
//     //     for(int j=0; j<r; j++){
//     //         cout<<a[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }
// }

