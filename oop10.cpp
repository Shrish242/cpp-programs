#include<iostream>
using namespace std;

class box{
    private:
    float l , b , h;
    public:
    box(){  //constructor
        l = b = h= 0;
    }
    box(float side){ //constructor
        l=b= h = side;
    }
    box(float len , float br , float he){ //constructor
        l = len;
        b = br;
        h = he;
    }
    box(box &ob){    //copy constructor
        l = ob.l;
        b = ob.b;
        h = ob.h;
    }
    void display(){
        cout<<"\nlength:"<<l;
        cout<<"\nbreadth"<<b;
        cout<<"\nheight"<<h<<endl;
    }
    float volume(){
        return l * b * h;
    }
};

int main(){
    float vol;
    box b1 , b2(10) , b3(5 , 6 ,7) , b4(b3);
    cout<<"for volume of no argument \t "<<endl;
    b1.display();
    vol = b1.volume();
    cout<<"the volume for no argument \t"<<vol<<endl;
    cout<<"for volume of 1 argument \t"<<endl;
    b2.display();
    vol = b2.volume();
    cout<<"the volume for no argument \n"<<vol<<endl;
    cout<<"for volume of 3 arguments \t"<<endl;
    b3.display();
    vol = b3.volume();
    cout<<"the volume for no argument \n"<<vol;
    cout<<"for volume of copy constructor \t"<<endl;
    b4.display();
    vol = b4.volume();
    cout<<"the volume forcopy constructor"<<vol;
    return 0;

}