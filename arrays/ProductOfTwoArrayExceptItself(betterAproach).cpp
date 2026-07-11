#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> ProductOfTwoArray(vector <int> nums,int n){
    vector <int> prefix(n,1);
    vector <int> suffix(n,1);
    vector <int> answer(n,1);

    for(int i=1;i<n;i++){
        prefix[i]= prefix[i-1]*nums[i-1];

    }
    for(int j=n-2;j>=0;j--){
        suffix[j]=suffix[j+1]*nums[j+1];
    }
    for(int i=0;i<n;i++){
       answer[i]=suffix[i]*prefix[i];
    
    }

  return answer;
}

int main(){
    vector <int> nums={1,2,3,4};
    int n=nums.size();
    vector <int> ans=ProductOfTwoArray(nums,n);
     for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}