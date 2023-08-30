#include<iostream>
using namespace std;

class student{
char *name;
int age;
public:
student(char *n , int a){
    name = n;
    age = a;
}
char *getname(){
    return name;
}
void display(){
    cout<<"Name::"<<name<<endl;
    cout<<"Age::"<<age<<endl;
}
};
class foreignstudent : public student{
    char *country;
    public:
    foreignstudent (char *n , int a , char *c) : student(n , a){
        country = c;
    }
    void display2(){
        display();
        cout<<"Country::"<<country<<endl;
    }
};

int main(){
    foreignstudent fs("Steven" , 21 , "uk");
    fs.display2();
    return 0 ;
}