#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int i,j,k,x,c=0;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            for(k=j+1;k<10;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    c++;
                }
            }
        }
    }
    cout<<"Total number of pairs: "<< c <<endl;
}