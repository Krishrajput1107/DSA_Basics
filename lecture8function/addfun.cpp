#include<iostream>
using namespace std;
    int add(int num1, int num2){
        int sum;
        sum=num1+num2;
        return sum;

    }
    int add(int num1, int num2,int num3){
        int sum;
        sum=num1+num2+num3;
        return sum;

    }
    float add(float num1, float num2){
        float sum;
        sum=num1+num2;
        return sum;

    }
    int main(){
        int a=5,b=4;
        float c=3.7,d=4.3;
        cout<< add(c,d);
    
    }
