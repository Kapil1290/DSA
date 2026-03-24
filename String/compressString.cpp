#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str = "aabbbaaccccs";
    // int x=0, count=0;
    // char c;
    // for(int i=0; i<str.length(); i++){
    //     if(x==0){
    //         c= str[i];
    //         x=1;
    //         cout<<str[i];
    //     }
    //     if(c==str[i]){
    //         count++;
    //     }
    //     if(c!=str[i+1]){
    //         if(count>1){
    //             cout<<count;
    //         }
    //         x=0;
    //         count=0;
    //     }
    // }

    reverse(str.begin(), str.end());
    cout<<str;
}