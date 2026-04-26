#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool isValid(vector<int> s, vector<int> t){
    for(int i=0; i<t.size(); i++){
        if(s[i]<t[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "AODBKCNBA";
    string t = "ABC";
    string res="";
    vector<int> str1(128,0);
    vector<int> str2(128,0);

    for(int i=0; i<t.size(); i++){
        str1[s[i]]++;
    }

    int l=0;
    int minLength=INT_MAX;
    int startingChar = INT_MAX;
    cout<<str2[0]<<" "<<str2[1]<<" "<<str2[2]<<" ";
    for(int i=0; i<s.size(); i++){
        str2[t[i]]++;
        while(isValid(str1, str2)){
            cout<<s[i]<<i<<endl;
            if(minLength>i-l+1){
                minLength=i-l+1;
                startingChar=l;
            }
            str2[t[l]]--;
            l++;
        }
    }

    
    string str =  (minLength==INT_MAX) ? "" : s.substr(startingChar, startingChar+minLength);
    cout<<str;
}

