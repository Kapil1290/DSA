#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s = "ABSDCBOCTDBANC";
    string t = "ABC";

    vector<int> freq(128,0);

    for(int i=0; i<s.size(); i++){
        freq[t[i]]++;
    }
}