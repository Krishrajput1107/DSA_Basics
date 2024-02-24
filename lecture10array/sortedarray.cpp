#include<iostream>
using namespace std;
int main(){
    int arr[5];
    bool b=false;
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter elements in array: "<<endl;
    for(int i=1;i<len;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=len;i++){
        if(arr[i]>arr[i-1]){
            b=true;
        }
        else{
            b=false;
        }
    }
    if(b==true){
        cout<<"Array is sorted "<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}