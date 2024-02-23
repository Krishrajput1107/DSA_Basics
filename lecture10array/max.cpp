#include<iostream>
using namespace std;
int main(){
    int arr[]={6,7,8,23,1,243,21,4556,64,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=INT16_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Largest element is "<<max<<endl;
}