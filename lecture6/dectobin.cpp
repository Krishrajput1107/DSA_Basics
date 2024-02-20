#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,bit,ans=0,i=0;
    cout<<"Enter any decimal number"<<endl;
    cin>>n;
    while(n!=0){
        bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n>>1;
        i++;
    }
    cout << "answer is: "<< ans<<endl;
    return 0;
}