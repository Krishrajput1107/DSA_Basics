#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter any binary number"<<endl;
    cin>>n;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<"Number of 1 bits "<<count<<endl;
}