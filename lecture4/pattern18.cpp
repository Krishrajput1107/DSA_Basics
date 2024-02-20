#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=68;i>=65;i--)
    {
        for(j=i;j<=68;j++){
            cout<<char(j);
        }
        cout<<endl;
    }
}