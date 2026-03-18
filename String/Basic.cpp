// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     // cin>>str;
//     // cout<<str;

//     // cout<<str[1];
//     // cout<<str.length();

//     // int s = 'R';
//     // cout<<s;

//     // string str1 = "kapia";
//     // string str2 = "kapil";

//     // cout<<str1.compare(str2);


// }




// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main() {
// 	string s;
// 	cin>>s;
// 	vector<int> f1(26,0);
// 	vector<int> f2(26,0);

// 	for(int i=0; i<s.size(); i++){
// 		if(s[i]>='a' and s[i]<='z'){
// 			f1[s[i]-'a']++;
// 		}else{
// 			f2[s[i]-'A']++;
// 		}
// 	}

// 	int val1=0;
// 	int idx1;
// 	for(int i=0; i<f1.size(); i++){
// 		if(val1<f1[i]){
// 			val1=f1[i];
// 			idx1=i;
// 		}
// 	}
//     // cout<<val1<<endl<<idx1<<endl;

// 	int val2=0;
// 	int idx2;
// 	for(int i=0; i<f2.size(); i++){
// 		if(val2<f2[i]){
// 			val2=f2[i];
// 			idx2=i;

// 		}
// 	}


    
//     // cout<<val2<<endl<<idx2;

// 	if(val1>val2){
// 		char c = 97+idx1;
// 		cout<<c;
// 	}else{
// 		char c =65+idx2;
// 		cout<<c;
// 	}

// 	return 0;
// }


#include <iostream>
using namespace std;
int main(){
    string s="aabbccsdda";
    int x=0;
    char c; int count=0;
    for(int i=0; i<s.length(); i++){
        if(x==0){
            c=s[i];
            cout<<c;
            x=1;
        }
        if(c==s[i]){
            count++;
        }

        if(c!=s[i+1]){
            cout<<count;
            count=0;
            x=0;
        }
    }

    return 0;
}
