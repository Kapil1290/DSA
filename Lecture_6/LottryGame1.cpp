#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=300 && n<=460){
        cout<<"You won a MacBook"<<endl;
        if(n>=300 && n<=380){
            cout<<"Model:M1Mac"<<endl;
        } else if(n>=381 && n<=460){
            cout<<"Model:M2Mac";
        }
    } else if(n>=200 && n<=280){
        cout<<"You won a pack of Kurkure";
        if(n>=200 && n<=240){
            cout<<"Chilli kurkure"<<endl;
        } else if(n>=241 && n<=280){
            cout<<"onion kurkure"<<endl;
        }
    } else if(n>=1100 && n<=1500){
        cout<<"You won a Cycle"<<endl;
        if(n>=1100 && n<=1500){
            cout<<"Brand: Avon"<<endl;
        }else if(n>=1301 && n<=1500){
            cout<<"Brand: Hero"<<endl;
        }
    } else if(n>=50 && n<=80){
        cout<<"You won a Bike"<<endl;
        if(n>=50 && n<=65){
            cout<<"Brand: Bullet"<<endl;
        } else if(n>65 && n<=80){
            cout<<"Brand: Rajdoot"<<endl;
        }
    } else {
        cout<<"Better luch next time" <<endl;
    }
}