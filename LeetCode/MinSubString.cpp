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
        str2[s[i]]++;
    }

    int l=0;
    int minLength=INT_MAX;
    int startingChar = 0;
    // cout<<str1[65]<<" "<<str1[66]<<" "<<str1[67]<<" ";
    for(int i=0; i<str1.size(); i++){
        str1[s[i]]++;
        while(isValid(str1, str2)){
            // cout<<str1[i]<<i<<endl;
            if(minLength>i-l+1){
                minLength=i-l+1;
                startingChar=l;
            }
            str1[s[l]]--;
            l++;
        }
    }

    
    string str =  minLength==INT_MAX ? "" : s.substr(startingChar, minLength);
    cout<<str;
}

