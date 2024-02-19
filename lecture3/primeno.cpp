#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=2,c=0;
    while(n>i){
        if(n%i==0){
            c++;
        }
        i++;
    }
    if(c==0){
        cout<<"Prime no."<<endl;

    }
    else{
        cout<<"not a prime no."<<endl;
    }
}