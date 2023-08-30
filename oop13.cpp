#include<iostream>
using namespace std;

class employee{
public:
int eid , salary;
employee(int id , int sal){
eid = id;
salary = sal;
}
// int geteid(){
//     return eid;
// }
// int getsalary(){
//     return salary;
// }
void emp(){
    cout<<"the id of employee is "<<eid<<endl;
    cout<<"the salary of employee is "<<salary<<endl;
}
employee(){}

};

//ways  to declare inheritance in c++
// class {{derived-class-name}} : {{visibility-mode}} {{base-clas-name}}{
//     members list
// };

class programmer : public employee{
public:
programmer(int emid){
    eid = emid;
}
int pro = 9;
void getdata(){
    cout<<eid<<endl;
}

};


int  main(){
employee srs(1 , 2000000);
srs.emp();
programmer srs1(2);
srs1.getdata();
cout<<srs1.pro<<endl;
cout<<srs1.eid<<endl;
return 0;

}