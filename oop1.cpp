#include<iostream>
using namespace std;

class rectangle{
private:
int length;
int breadth;
public:
void setdata(int l , int b){
    length = l;
    breadth = b;
}
void showdata(){
    cout<<"length:"<<length<<endl<<"Breadth:"<<breadth<<endl;
}
int findarea(){
    return length * breadth;
}
int findperimeter(){
    return (2*(length+breadth));
}
};
int main(){
rectangle r;
r.setdata(4,2);
r.showdata();
cout<<"Area="<<r.findarea()<<endl;
cout<<"Perimeter"<<r.findperimeter()<<endl;
return 0;
}