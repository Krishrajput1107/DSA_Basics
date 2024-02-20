#include<iostream>
using namespace std;
int main(){
    int i,j,n,k=65;
    cin>>n;
    for(i=65;i<=n;i++)
    {
        for(j=65;j<=i;j++){
            cout<<char(k);
            k++;
        }
        cout<<endl;
    }
}