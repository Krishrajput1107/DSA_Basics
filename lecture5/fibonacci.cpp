#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,i;
    int sum=0,n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(i=0;i<=n;i++)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }

}