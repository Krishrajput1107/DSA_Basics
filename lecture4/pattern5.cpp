#include<iostream>
using namespace std;
int main(){
    int i,j,n,k=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}