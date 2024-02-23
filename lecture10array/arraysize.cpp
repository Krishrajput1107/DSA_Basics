#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int sizearr=sizeof(arr);
    int a=sizeof(arr[0]);
    cout<<sizearr<<endl;
    cout<< sizearr/a<<endl;
    int arr2[4];
    cout<<arr2[0]<<endl;
}