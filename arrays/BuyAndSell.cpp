#include<iostream>
using namespace std;


int MaxProfit(int prices[] , int n){
    int Profit=0;

    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(prices[j] - prices[i]>Profit){
                Profit = prices[j]-prices[i];

            }
        }
    }
   return Profit;
}


int main(){
    int prices[] ={7,1,5,3,6,4};
    int n = sizeof(prices) / sizeof(prices[0]);

    cout<<MaxProfit(prices,n);
    

return 0;
}