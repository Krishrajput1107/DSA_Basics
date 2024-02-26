#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int i,j,x,c=0;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]+arr[j]==x){
                c++;
            }
        }
    }
    cout<<"Total number of pairs: "<< c <<endl;
}