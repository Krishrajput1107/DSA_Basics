#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int sum=0;
    cout<<"Enter the number of elements in array"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of array is "<<sum<<endl;
}