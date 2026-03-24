#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str = "the fox make it easy  ";
    string t="";
    string res="";

    //here empty is work as isEmpty of java
    for(int i=str.length()-1; i>=0; i--){
        if(str[i]==' ' && t.empty()){
            continue;
        }
        if(str[i]!=' '){
            t.push_back(str[i]);
        }
        if(str[i]==' ' && !t.empty()){
            reverse(t.begin(),t.end());
            res.append(t);
            t.clear();
            res.push_back(' ');
            
        }
    }
    if(str[0]!=' '){
        reverse(t.begin(),t.end());
        res.append(t);
    }

    if(res[res.length()-1] == ' '){
        res.pop_back();
    }

    cout<<res;
}