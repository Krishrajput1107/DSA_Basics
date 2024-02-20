#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=65;i<=n;i++)
    {
        for(j=65;j<=n;j++){
            cout<<char(i);
        }
        cout<<endl;
    }
}