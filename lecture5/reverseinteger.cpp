#include<iostream>
using namespace std;
int main(){
    int rev=0,rem,i,n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    i=n;
    while(i>0){
        rem=i%10;
        rev=rev*10+rem;
        i=i/10;
    }
    cout<<"Reverse of the number is: "<<endl;
    cout<< rev;

}