#include<iostream>
using namespace std;
int main(){
    int amount,hundrednotes,fiftynotes,tennotes,onenotes;
    cout<<"Enter the amount "<<endl;
    cin>>amount;
    hundrednotes=amount/100;
    amount=amount%100;
    fiftynotes=amount/50;
    amount=amount%50;
    tennotes=amount/10;
    amount=amount%10;
    onenotes=amount/1;
    cout<<"hundred notes: "<<hundrednotes<<endl;
    cout<<"fifty notes: "<<fiftynotes<<endl;
    cout<<"ten notes: "<<tennotes<<endl;
    cout<<"one notes: "<<onenotes<<endl;

}