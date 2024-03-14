#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,932,7,8546,9};
    int size=10;
    int max=arr[0];
    int secmax=INT16_MIN;
    int thirdmax=INT16_MIN;
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
     for(int i=0;i<10;i++){
        if(arr[i]>secmax && arr[i]<max){
            secmax=arr[i];
        }
    }
    for(int i=0;i<10;i++){
        if(arr[i]>thirdmax && arr[i]<secmax){
            thirdmax=arr[i];
        }
    }

    cout<<max<<endl;
    cout<<secmax<<endl;
    cout<<thirdmax<<endl;
}