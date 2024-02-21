#include<iostream>
using namespace std;
int nfactorial(int n){
    int i;
    int fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int rfactorial(int r){
    int i;
    int fact=1;
    for(i=1;i<=r;i++){
        fact=fact*i;
    }
    return fact;
}
int nrfactorial(int n,int r){
    int i;
    int fact=1;
    int b=n-r;
    for(i=1;i<=b;i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n, int r){
    int x=nfactorial(n);
    int y=rfactorial(r);
    int z=nrfactorial(n,r);
    double div=x/(y*z);
}
int main(){
    int n,r,a;
    cout<<"Enter the value of n and r"<<endl;
    cin>>n;
    cin>>r;
    a=ncr(n,r);
    cout<<a;
}