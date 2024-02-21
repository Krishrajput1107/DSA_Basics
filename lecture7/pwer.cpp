#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b, i,ans=1;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    for(i=1;i<=b;i++){
        ans=ans*a;
    }
    cout<<ans;

}