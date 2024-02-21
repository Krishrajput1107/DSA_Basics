#include<iostream>
using namespace std;
int main(){
    int n,a,mask=0,ans;
    cout<<"Enter any number "<<endl;
    cin>>n;
    a=~n;
    while(n!=0){
        n=n>>1;
        mask=(mask<<1)|1;
    }
    ans=mask&a;
    cout<<"Answer is:"<< ans<<endl;

}