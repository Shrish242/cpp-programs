#include<iostream>
using namespace std;

class employee{
    int eid , salary;
    public:
    void getdata(){
        cout<<"enter id and salary of employee"<<endl;
        cin>>eid>>salary;
    }
    void display1(){
        cout<<"emp id::"<<eid<<endl;
        cout<<"slary::"<<salary<<endl;
    }

};

class engineer : public employee{
char dept[10];
public:
void getdata1(){
getdata();
cout<<"enter the department::"<<endl;
cin>>dept;
}
void display(){
    display1();
    cout<<"Department::"<<dept<<endl;
}
};
 class typist : public employee
{
    int ts;
    public:
    void getdata2(){
        getdata();
        cout<<"enter typing speed"<<endl;
        cin>>ts;
    }
    void display2(){
        display1();
        cout<<"typing speed::"<<ts<<endl;
    }
};


int main(){
    engineer e;
    typist t;
    e.getdata();
    t.getdata();
    cout<<"--------Employee Details-----"<<endl;
    cout<<"-----------------------------"<<endl;
    e.display();
    cout<<endl;
    t.display2();
    return 0;
}