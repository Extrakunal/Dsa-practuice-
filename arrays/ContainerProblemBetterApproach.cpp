#include <iostream>
#include <algorithm>
using namespace std;


int MaxiumVolumeContainer(int height[],int n){

    int Ls=0;
    int Rs=n-1;
    int ans=0;

    while(Ls<Rs){
        int H=min(height[Ls],height[Rs]);
        int width=Rs-Ls;
        int area =H*width;
        ans =max(ans,area);

        if(height[Ls]<height[Rs]){
            Ls++;
        }else{
            Rs--;
        }
    }
    return ans;
};
int main(){
    int height[]={1,8,6,2,5,4,3,8,7};
    int n =sizeof(height)/sizeof(height[0]);

    cout<<MaxiumVolumeContainer(height,n);
    return 0;
}