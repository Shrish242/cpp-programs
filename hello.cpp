#include<iostream>
#include<conio.h>
using namespace std;

inline int product(int a , int b){
    return a *b;
}

int main(){
    int a , b;
    cout<<"enter the a:"<<endl;
    cin>>a;
    cout<<"enter the b"<<endl;
    cin>>b;
    cout<<"the product of a and b is \t"<<product(a , b)<<endl;
    return 0;



}