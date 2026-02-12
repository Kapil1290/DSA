#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> prices;
    prices.push_back(7);
    prices.push_back(1);
    prices.push_back(5);
    prices.push_back(3);
    prices.push_back(6);
    prices.push_back(4);
    int minPrice = 0;
        for(int i=0; i<prices.size(); i++){
            if(prices.at(i)<prices.at(minPrice)){
                minPrice = i;
            }
        }
        // cout<<minPrice<<endl;
        int maxPrice;
        int i=minPrice;
        while(i<prices.size()-1){
            if(prices.at(i)<prices.at(i+1)){
                maxPrice = i+1;
            }
            i++;
        }
        // cout<<maxPrice<<endl;
    cout<<prices.at(maxPrice)-prices.at(minPrice);    

}