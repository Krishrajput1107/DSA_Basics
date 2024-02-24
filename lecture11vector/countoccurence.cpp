#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(10);
    int x,c=0;
    cout<<"Enter element to be searched how many times it appeared"<<endl;
    cin>>x;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        if(x==v[i]){
            c++;
        }
    }
    cout<<"Number of occurence: "<<c<<endl;
    


}
