#include<iostream>
using namespace std;
int main(){
    int a=123;
    cout<<a<<endl;
    bool b=1;
    cout<<b<<endl;
    float c=1.23;
    cout<<c<<endl;
    double d=1.57654;
    cout<<d<<endl;
    char ch='a';
    cout<<ch<<endl;
    int sizea=sizeof(a);
    int sizeb=sizeof(b);
    int sizec=sizeof(c);
    int sized=sizeof(d);
    int sizech=sizeof(ch);
    cout<<"Size of a is:"<<sizea<<endl;
    cout<<"Size of b is:"<<sizeb<<endl;
    cout<<"Size of c is:"<<sizec<<endl;
    cout<<"Size of d is:"<<sized<<endl;
    cout<<"Size of ch is:"<<sizech<<endl;



}