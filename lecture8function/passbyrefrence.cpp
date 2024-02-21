#include<iostream>
using namespace std;
void changevalue(int &z){//formal parameter
    z=100;
}
int main(){
    int a=5;
    changevalue(a);//actual parameter
    cout<<a;
}