#include<iostream>
using namespace std;

int largestelementIndex(int arr[],int size){
    int i,max=INT16_MIN;
    int maxindex=-1;
    for(i=0;i<10;i++){
        if(max<arr[i]){
            max=arr[i];
            maxindex=i;
        }
    }
    return maxindex;
}

int main(){
    int arr[]={2,3,1,4,9,7,5,6,8,9};
    int n=10;
    int indexoflargest=largestelementIndex(arr,n);
    int largestelement=arr[indexoflargest];
    for(int i=0;i<10;i++){
        if(arr[i]==largestelement){
            arr[i]=-1;
        }
    }
    int indexofsecondlargest=largestelementIndex(arr,n);
    cout<<arr[indexofsecondlargest];
}