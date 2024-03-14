#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int size=10;
    int k;
    cout<<"Enter at which position You want to rotate the array: ";
    cin>>k;
    for(int i=0;(i+k)<size;i++){
        cout<<arr[i+k]<<endl;
    }
    for(int i=0;i<k;i++){
        cout<<arr[i]<<endl;
    }
}