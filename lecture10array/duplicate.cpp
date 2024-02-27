#include<iostream>
using namespace std;
int main(){
    int arr[9];
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0;i<9;i++){
        cin>>arr[i];
    } 
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
            }
        }
    }
}