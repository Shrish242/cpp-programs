#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // ofstream fout;
    // fout.open("test.txt");
    // fout<<"Hello World";
    // fout.close();

    string st2;
    ifstream in("test.txt");
    getline(in, st2);
    cout<<st2;
    in.close();
    
    return 0;
}