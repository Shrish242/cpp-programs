#include<iostream>
using namespace std;

class complex {
    private:
    int a;
    int b;
    public:
    void setdata(int x , int y){
        a = x;
        b = y;
    }
    int evaluatedata(complex o1 , complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    int displaydata(){
        cout<<"The sum of complex number is "<< a << " + i" << b<<endl;
    }
};


int main(){
    complex c1 , c2 , c3;
    c1.setdata(3 , 4);
    c2.setdata(1 , 2);
    c3.evaluatedata(c1 , c2);
    c3.displaydata();



}