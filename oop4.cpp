#include<iostream>
#include<string>
using namespace std;

class binary{
    private:
    string b;
    public:
    void getdata(){
        cout<<"Input the binary numbers";
        cin>>b;
    }
    void check(){
        for (int i = 0; i < b.length(); i++)
        {
            if (b.at(i) == '0' || b.at(i) == '1')
            {
                cout<<"this is binary nummber"<<endl;
            }
            else{
                cout<<"this isnot binary number";
            }
        }
    }
    void compliment(){
        for (int i = 0; i < b.length(); i++)
        {
            if (b.at(i) == '0')
            {
                b.at(i) == '1';
            }
            else{
                b.at(i) == '0';
            }
            
        }
        
    }
    void showdata(){
        for (int i = 0; i < b.length(); i++)
        {
            cout<<b.at(i);
        }
        
    }
};

int main(){
    binary bi;
    bi.getdata();
    bi.check();
    bi.compliment();
    bi.showdata();
}