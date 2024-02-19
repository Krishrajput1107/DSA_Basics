#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    if(a>0){
        cout<<"It's a pos--3itive number"<<endl;
    }
    else{
        if(a<0){
            cout<<"It's a negative number"<<endl;
        }
        else{
            cout<<"It's a zero"<<endl;
        }
    }
}