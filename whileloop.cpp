
#include<iostream>
using namespace std;

int main(){
    int n = 0 , a = 2 , i = 0 , m;
    while (n < 5)
    {
        cout<<n<<endl;
        n = n +1;

    }
    cout<<"\n"<<endl;
    do
    {
        cout<<a<<endl;
        a = a+2;
    } while (a < 10);

    cout<<"\n"<<endl;
    for ( i = 0; i <=20; i++)
    {
        m = i * i;
        cout<<i<<"*"<<i<<"=\t"<<m<<endl;
    }
    

    
    
}