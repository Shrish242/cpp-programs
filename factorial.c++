#include<iostream>
#include<conio.h>
using namespace std;

int factorial (int a){
    if (a <= 1)
    {
        return 1;
    }
    else{
        return a * factorial(a-1);
    }
    
}

int main(){
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    cout<<"the factorial of "<< a <<" is "<<factorial(a)<<endl;

    
    return 0;
}