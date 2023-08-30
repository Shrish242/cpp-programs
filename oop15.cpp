#include<iostream>
using namespace std;

class teacher{
    int tid;
    char subject[20];
    public:
    void getdata(){
        cout<<"enter teacher id and subject "<<endl;
        cin>>tid>>subject;
    }
    void display1(){
        cout<<"teacher id::"<<tid<<endl;
        cout<<"subject::"<<subject<<endl;
    }
};
class staff{
    int sid;
    char level[10];
    public:
    void getstaff(){
        cout<<"enter staff id and level"<<endl;
        cin>>sid>>level;
    }
    void display2(){
        cout<<"staff id::"<<sid<<endl;
        cout<<"level::"<<level<<endl;
    }
};

class coordinator : public teacher, public staff {
    char program[10];
public:
    void getdata() {
        teacher::getdata();  // Call teacher's getdata()
        staff::getstaff();   // Call staff's getstaff()
        cout << "Enter program::" << endl;
        cin >> program;
    }
    void displaydata() {
        display1();
        display2();
        cout << "program::" << program;
    }
};

int main(){
    coordinator c;
    c.getdata();
    cout<<"-----Coordinate details-----"<<endl;
    cout<<"-----------------------------"<<endl;
    c.displaydata();
    return 0;

}