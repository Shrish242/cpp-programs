#include<iostream>
using namespace std;

class Distance{
    int feet;
    float inches;
    public:
    Distance(){
        feet = 0;
        inches = 0.0;
    }
    void getdata(){
        cout<<"enter feet and inches"<<endl;
        cin>>feet>>inches;
    }
    void display(){
        cout<<feet<<""<<inches<< """"<<endl;
    }
    Distance add_distance(Distance);
   };
   Distance Distance ::add_distance(Distance d2)
   {
    Distance temp;
    temp.inches=inches+d2.inches;
    while(temp.inches>=12.0)
    {
        temp.inches-=12.0;
        temp.feet +=1; 
    }
    temp.feet+=feet+d2.feet;
    return temp; 
   }   
   int main()
   {
    Distance d1, d2, d3; 
    cout<<"First distance : "<<endl;
    d1.getdata();
    cout<<"Second Distance:"<<endl;
    d2.getdata();
    d3=d1.add_distance(d2);
    cout<<"Total = ";
    d3.display();
    return 0;
    }