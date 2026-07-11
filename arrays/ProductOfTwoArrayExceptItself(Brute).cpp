#include <iostream>
#include <algorithm>
using namespace std;

void ProductOfArray(int nums[],int n,int answer[]){
    
    for(int i=0;i<n;i++){
        int Product=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                Product *= nums[j];
            }
        }
        answer[i]=Product;
    }
    
    
}

int main(){
    int nums[]={1,2,3,4};
    int n= sizeof(nums)/sizeof(nums[0]);
    int answer[n];
    ProductOfArray(nums, n, answer);

    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }
}