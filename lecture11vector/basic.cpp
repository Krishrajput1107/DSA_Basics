#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;
    v.push_back(1);

    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;
    v.push_back(2);

    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;;
    v.push_back(3);

    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;
    v.push_back(4);

    v.resize(5);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;

    
    v.resize(10);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;
    
}