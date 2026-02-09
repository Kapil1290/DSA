#include<iostream>
using namespace std;
int main(){
    int n;
    int prime= 0,x=1,flag=0,check=1;
    int frow=13, ffrow=2;
    int arrflag =0, arr[3];

    cin>>n;
    n=(n+1)/2;

    for(int i=1; i<=n; i++){
        check=1;
        for(int j=1; j<=2*i-2; j++){
            cout<<" ";
        }

        if(i==2){
            prime=2;
        }else{
            prime=2*(n-i)+1;
        }

        for(int k=x+1; k<=20&&check<=prime; k++){
            flag=0;
            if(k==2){
                x=k;
            }
            for(int l=2; l<k; l++){
                if(k%l==0){
                    flag=1;
                }   
                x=k;
            }
            if(flag==0){
                if(arrflag < 0){
                    arr[i-1] = x;
                    arrflag ++;
                }
                cout<<x<<" ";
                check++;
            }
        }
        arrflag =0;
        cout<<endl;
    }

    flag=0;
    // x=19;

       for(int i= n-1; i>=1; i--){
        check=1;
        for(int j=1; j<=2*i-2; j++){
            cout<<" ";
        }

        if(i==2){
            prime=2;
        }else{
            prime=2*(n-i)+1;
        }

        for(int k=arr[i-1]; k<=17 &&check<=prime; k++){
            flag=0;
            if(k==2){
                x=k;
            }
            for(int l=2; l<k; l++){
                if(k%l==0){
                    flag=1;
                }   
                x=k;
            }
            if(flag==0){
                cout<<x<<" ";
                check++;
            }
        }
        cout<<endl;

        int primeArr[] = {2,3,5,7,11,13,17,19};
        int m =(n+1)/2;

        // for(int i=1; i<=m; i++){
        //     for(int j=1; j<=2*n){
                
        //     }
        // }


    }
}

