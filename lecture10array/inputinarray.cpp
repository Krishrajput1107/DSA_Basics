#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Input the numbers in array:"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    char vowels[5];
    cout<<"Enter the vowels"<<endl;
    for(int j=0;j<5;j++){
        cin>>vowels[j];
    }
    for(int j=0;j<5;j++){
        cout<<vowels[j];
    }
    for(char k:vowels){
        cout<<k;
    }
    
}