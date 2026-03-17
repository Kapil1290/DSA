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




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	string s;
	cin>>s;
	vector<int> f1(26,0);
	vector<int> f2(26,0);

	for(int i=0; i<s.size(); i++){
		if(s[i]>='a' and s[i]<='z'){
			f1[s[i]-'a']++;
		}else{
			f2[s[i]-'A']++;
		}
	}

	int val1=0;
	int idx1;
	for(int i=0; i<f1.size(); i++){
		if(val1<f1[i]){
			val1=f1[i];
			idx1=i;
		}
	}

	int val2=0;
	int idx2;
	for(int i=0; i<f2.size(); i++){
		if(val2<f2[i]){
			val2=f1[i];
			idx2=i;

		}
	}

	if(val1>val2){
		char c = 'a'-idx1;
		cout<<c;
	}else{
		char c = 'A'-idx2;
		cout<<c;
	}

	// if()
	// sort(f1.begin(),f1.end());
	// sort(f2.begin(),f2.end());
	// int m1 = f1[f1.size()-1];
	// int m2 = f2[f2.size()-1];
	// cout<<x;
	// cout<<y;
	return 0;
}