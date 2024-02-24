#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int x;
    cout<<"Enter the element to be searched "<<endl;
    cin>>x;
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(5);
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(2);    
    for(int i=v.size()-1;i>=0;i--){
        if(x==v[i]){
            cout<<i<<endl;
            break;
        }
    }
}