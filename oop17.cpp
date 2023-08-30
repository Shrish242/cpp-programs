#include<iostream>
using namespace std;

class base{
    private:
    int m1;
    public:
    int m2;
    void setdata1();
    int getdata1();
};

void base :: setdata1(void){
m1 = 10;
m2 = 20;
}
int base :: getdata1(){
    return m1;
}

class derived : public base{
    public:
    int m3;
    int process();
    void display();
};
int derived :: process(){
m3 = getdata1() * m2;
return m3;
}

void derived :: display(){
    cout<<"the answer is :"<< process()<<endl;
    cout<<"the vallue of m1:"<<getdata1()<<endl;
    cout<<"the value of m2:"<<m2<<endl;
}

int main(){
    derived d;
    d.getdata1();
    d.setdata1();
    d.process();
    d.display();
}
