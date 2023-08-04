#include<iostream>
#include<conio.h>
using namespace std;

int volume(int a){
    return a * a* a;
}

int volume(long a , int h){
    return(3.14 * a * h);
}

int volume(int l , int b , int h){
    return(l *b *h);
}


int main(){
    cout<<"the volume of cube is "<<volume(5)<<endl;
    cout<<"the volume of cylinder is "<<volume(9 , 8)<<endl;
    cout<<"the volume of cuboid is "<<volume(2 , 3 , 4)<<endl;
    return 0;
}