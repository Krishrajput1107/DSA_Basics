#include<iostream>
using namespace std;
int main(){
    int i,n,bit;
    cout<<"Enter any number"<<endl;
    cin>>n;
    while(n!=0){
        bit=n&1;
        if(bit==1){
            
        }
        else{
            n=n+1;
        }
        n=n>>1;
    }
    cout<<"Compliment of base 10 is: "<<n;
}