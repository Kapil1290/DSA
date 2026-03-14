#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str = " the fox make it easy  ";
    string t = "";
    string res = "";
    for(int i=str.length()-1; i>=0; i--){
        if(str[i]==' ' and !t.empty()){
            continue;
        }
        if(str[i]!=' '){
            t.push_back(str[i]);
        }
        if(str[i]==' ' and t.empty()){
            reverse(t.begin(),t.end());
            res.append(t);
            res.push_back(' ');
            t.clear();
        }
    }

    if(res[res.length()-1] == ' '){
        res.pop_back();
    }

    cout<<res;
}