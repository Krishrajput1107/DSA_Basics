#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    if(ch>=47 and ch<=58){
        cout<<"It's a value"<<endl;
    }
    else if(ch>=65 and ch<=90){
        cout<<"It's a upper case"<<endl;

    }
    else if(ch>=97 and ch<=122){
        cout<<"It's a lower case"<<endl;
    }
}