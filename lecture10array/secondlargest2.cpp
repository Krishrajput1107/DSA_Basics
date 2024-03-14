#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,9,8,5,9};
    int size=10;
    int max=INT16_MIN;
    int secmax=INT16_MIN;
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]>secmax && arr[i]!=max){
            secmax=arr[i];
        }
    }
    cout<<"Second largest element is: "<<secmax<<endl;
}