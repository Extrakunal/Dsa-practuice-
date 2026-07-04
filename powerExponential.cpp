#include<iostream>
using namespace std;

double powerExponential(double x,int n){
    long biform=n;
    if(n<0){
        x=1/x;
        biform= -biform;
    }
    double ans=1;

    while(biform>0){
        if(biform%2==1){
            ans*=x;
        }
        x*=x;
        biform/=2;
    }
    return ans;

}


int main(){
    double x=3;
    int n=100;


    cout<<powerExponential( x, n);

    return 0;
}