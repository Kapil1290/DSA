#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str = " the fox make it easy  ";
    string t="";
    string res="";
    for(int i=str.length()-1; i>=0; i--){
        if(str[i]==' ' && !(t.empty())){
            continue;
        }
        if(str[i]!=' '){
            t.push_back(str[i]);
        }
        if(str[i]==' ' && (t.empty())){
            reverse(t.begin(),t.end());
            res.append(t);
            cout<<res;
            t.clear();
            res.push_back(' ');
            
        }
    }
    cout<<res;
    if(res[res.length()-1] == ' '){
        cout<<res;
        res.pop_back();
    }
}