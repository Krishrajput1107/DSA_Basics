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
    int arr[]={2,3,1,4,7,5,6,9,8,0};
    int max=INT16_MIN;
    int indexoflargest=largestelementIndex(arr,10);
    arr[indexoflargest]=-1;
    int indexofsecondlargest=largestelementIndex(arr,10);
    cout<<arr[indexofsecondlargest];
}