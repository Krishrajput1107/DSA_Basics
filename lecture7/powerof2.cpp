#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i,c=0;
    cout<<"Enter any number"<<endl;
    cin>>n;
    for(i=0;i<31;i++){
        if(pow(2,i)==n){
            c++;
            break;
        }
    }
    if(c>0){
        cout<<"Its a power of 2"<<endl;
    }
    else{
        cout<<"Not a power of 2"<<endl;
    }

}