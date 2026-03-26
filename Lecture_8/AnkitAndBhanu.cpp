#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    a.push_back(10);
    a.push_back(2);
    a.push_back(8);
    a.push_back(6);
    a.push_back(9);

    int l=0; int h=a.size()-1;
    int Ascore = 0;
    int Bscore = 0;
    while(l<h){
        if((l)%2==0){
            if(a[l]>a[h]){
                Ascore += a[l];
                Bscore += a[h];
            }else{
                Ascore += a[h];
                Bscore += a[l];
            }
            l++; h--;
        }else{
            if(a[l]>a[h]){
                Bscore += a[l];
                Ascore += a[h];
            }else{
                Bscore += a[h];
                Ascore += a[l];
            }
            l++; h--;
        }
    }

    cout<<Ascore<<" "<<Bscore;
}