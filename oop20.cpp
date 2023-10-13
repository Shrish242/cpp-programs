#include<iostream>
using namespace std;

class base1 {
    public:
    void greet(){
    cout<<"Good morning"<<endl;
    }
};

class base2{
    public:
    void greet(){
        cout<<"Good afternoon"<<endl;
    }

};

class derived : public base1 , public base2{
    public:
    int a;
    void greet(){
        base1 :: greet();
    }
};

int main(){
    base1 b1;
    base2 b2;
    b1.greet();
    b2.greet();
    derived d;
    d.greet();
}