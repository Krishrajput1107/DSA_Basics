#include<iostream>
using namespace std;
int getmax(int arr[],int size){
    int max=INT16_MIN;
    int index=-1;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
            index=i;
        }
    }
    return index;
}
int main(){
    int arr[7]={1,2,3,4,7,6,7};
    int fs=getmax(arr,7);
    cout<<arr[fs];
    for(int i=0;i<7;i++){
        if(arr[i]==fs){
            arr[i]=-1;
        }
    }
        int si=getmax(arr,7);
        cout<<arr[si];
}