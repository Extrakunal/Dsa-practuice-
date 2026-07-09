#include <iostream>
#include <algorithm>
using namespace std;



int MaxiumVolumeContainer( int height[],int n){

    int ans=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int width=j-i;
            int minVal=min(height[i],height[j]);
            int area= minVal*width;

            ans=max(ans,area);
        }

    }
    return ans;

}
int main(){
    int height[]={1,8,6,2,5,4,3,8,7};
    int n =sizeof(height)/sizeof(height[0]);

    cout<<MaxiumVolumeContainer(height,n);
    return 0;
}