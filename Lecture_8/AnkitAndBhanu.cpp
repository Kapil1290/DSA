#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    int l=0; int h=a.size()-1;
    int Ascore = 0;
    int Bscore = 0;
    while(l<=h){
        if((l)%2==0){
            if(l!=h){
                if(a[l]>a[h]){
                   Ascore += a[l];
                   Bscore += a[h];
                }else{
                   Ascore += a[h];
                   Bscore += a[l];
                }
            }else{
                Ascore += a[l];
            }
            l++; h--;
        }else{
            if(l!=h){
                if(a[l]>a[h]){
                   Bscore += a[l];
                   Ascore += a[h];
                }else{
                    Bscore += a[h];
                    Ascore += a[l];
                }
            }else{
                Bscore += a[l];
                // cout<<l<<" "<<h;
            }
            l++; h--;
        }
    }

    cout<<Ascore<<" "<<Bscore;
}