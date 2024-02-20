#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=65;i<=n;i++)
    {
        for(j=i;j<=(i+2);j++){
            cout<<char(j);
        }
        cout<<endl;
    }
}