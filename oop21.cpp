#include<iostream>
using namespace std;

class base{
    private:
    int a;
    public:
    base(int a){
        cout<<"Default constructor of base class"<<a<<endl;
    }
    void display(){
        cout<<"Display of base class"<<endl;
    }
};

class base2{
     private:
    int b;
    public:
    base2(int b){
        cout<<"Default constructor of base class 2"<<b<<endl;
    }
    void display(){
        cout<<"Display of base class 2 "<<endl;
    }
};

class derived : public base ,virtual public base2{
    public:
    derived(int a , int b) : base(a) , base2(b){
        cout<<"Default constructor of derived class"<<endl;
    }
    void display(){
        cout<<"Display of derived class"<<endl;
    }
};

int main(){
    derived d(1,2);
    d.display();
    d.base::display();
    d.base2::display();
    return 0;
}