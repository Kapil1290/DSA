// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     vector<int> a;
//     vector<int> b(2,9);   // To initialize the array with element with 9
//     int val,cap;
//     cout<<"Give size of array:- ";
//     cin>>cap;
//     for(int i=1; i<=cap; i++){
//         cin>>val;
//         a.push_back(val);
//     }

//     cout<<a.size()<<endl; // for size
//     cout<<a.capacity()<<endl; // for capacity

//     for(int i=0; i<a.size(); i++){
//         cout<<a.at(i)<<" ";
//     }

//     // a.insert(a.begin(),4);  // begin value is 0

//     reverse(a.begin(),a.end());  // end is not sharp

//     cout<<endl;

//     // sort(a.begin(),a.end());
//     // printing of elements
//     for(int i=0; i<a.size(); i++){
//         cout<<a.at(i)<<" ";
//     }

//     // cin>>a[0];
//     // cin>>a[1];
//     cout<<a.at(0);
//     cout<<a.at(1);
    
// }



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr = {1,2,3};
    int x=0;
    for(int i=0; i<arr.size(); i++){
        x = 10*x + arr[i];
    }
    x=x+1;
    for()
}




    