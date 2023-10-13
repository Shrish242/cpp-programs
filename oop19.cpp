#include<iostream>
using namespace std;

class main{
    private:
    int a , b;
    public:
    void setdata1(int num1 , int num2){
        a = num1;
        b = num2;
    }
     int getA() {
        return a;
    }

    int getB() {
        return b;
    }
    void getdata(){
        cout<<"Enter the first number"<<endl;
        cin>>a;
        cout<<"Enter the second number"<<endl;
        cin>>b;
    }
};

class add : public main{
    public:
    int result;
    int add1(){
        result = getA() + getB();
        return result;
    }
};

class sub : public main{
    public:
    int result;
    int sub1(){
        result = getA() - getB();
        return result;
    }
};

class mul : public main{
    public:
    int result;
    int mul1(){
        result = getA() * getB();
        return result;
    }
};

class divi : public main{
    public:
    int result;
    int div1(){
        result = getA() / getB();
        return result;
    }
};

int main(){
    add a;
    sub s;
    mul m;
    divi d;
    int choice;
    cout<<"Enter the operation you want to perform"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cin>>choice;
    if( choice == 1)
    {
        a.getdata();
        a.add1();
        cout<<"The sum of the two numbers is :"<<a.result<<endl;
    }
    else if( choice == 2)
    {
        s.getdata();
        s.sub1();
        cout<<"The difference of the two numbers is :"<<s.result<<endl;
    }
    else if( choice == 3)
    {
        m.getdata();
        m.mul1();
        cout<<"The product of the two numbers is :"<<m.result<<endl;
    }
    else if( choice == 4)
    {
        d.getdata();
        d.div1();
        cout<<"The division of the two numbers is :"<<d.result<<endl;
    }
    else
    {
        cout<<"Invalid choice"<<endl;
    }	
    return 0;
}