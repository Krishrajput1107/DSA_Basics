#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int esum=0,osum=0,diff;
    for(int i=0;i<10;i=i+2)
    {
        esum=esum+arr[i];

    }
    for(int i=1;i<10;i=i+2)
    {
        osum=osum+arr[i];

    }

    diff=osum-esum;
    cout<<"difference: "<<diff<<endl;
}