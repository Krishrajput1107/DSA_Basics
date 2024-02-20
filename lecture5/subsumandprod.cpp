#include<iostream>
using namespace std;
int main(){
    int n,digit,sum=0,prod=1,i,sub;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    i=n;
    while(i>0){
        digit=i%10;
        sum=sum+digit;
        prod=prod*digit;
        i=i/10;
    }
    sub=prod-sum;
    cout<<"Subtraction of sum and product is: "<<sub<<endl;
}