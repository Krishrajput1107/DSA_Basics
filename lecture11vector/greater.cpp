#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(10);
    int x,c=0;
    cout<<"Enter element to be searched"<<endl;
    cin>>x;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            c++;
        }
    }
    cout<<"Number of elements greater then x: "<<c<<endl;
}