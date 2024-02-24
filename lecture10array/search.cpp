#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,10,9,10};
    int n;
    int ans=-1;
    cout<<"Enter the element to be searched"<<endl;
    cin>>n;
    for(int i=0;i<10;i++){
        if(arr[i]==n){
            ans=i;
            break;
        }
    }
    cout<< ans;
}