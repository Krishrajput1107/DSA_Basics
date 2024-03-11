#include<iostream>
using namespace std;
int main(){
    int a,b,i,p=1;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    for(i=0;i<b;i++){
        p=p*a;
    }
    cout<<"Value of power of a is : "<<p<<endl;

}