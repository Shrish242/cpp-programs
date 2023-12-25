#include<iostream>
using namespace std;

class base{
    public:
    int a;
    void func1(){
        cout<<"This is base class talking "<<a<<endl;
    }
};

class derived : public base{
    public:
    int b;
    void func2(){
        cout<<"This is derived class talking "<<b<<endl;
    }
};

int main(){
    base *ba;
    derived d;
    derived *de;
    ba = &d;
    ba->a=10;
    ba->func1();
    de = &d;
    de->b=20;
    de->func2();
    return 0;
}