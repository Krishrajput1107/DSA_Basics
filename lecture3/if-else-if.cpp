#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    if(a>0){
        cout<<"Positive number"<<endl;
    }
    else if(a<0){
        cout<<"Negative number"<<endl;
    }
    else{
        cout<<"It's a zero"<<endl;
    }

}