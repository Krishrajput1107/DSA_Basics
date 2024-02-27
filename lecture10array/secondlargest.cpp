#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int max=INT16_MIN;
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;

}