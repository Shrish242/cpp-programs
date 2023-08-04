#include<iostream>
using namespace std;

class money{
    private:
    int balance;
    float interest;
    public:
    void setdata(int b , int i){
        balance =b;
        interest =i;
    }
    void showdata(){
        cout<<"The balance"<<balance<<endl<<"Interest:"<<interest<<endl;
    }
    int profit(){
        return ( balance* interest/100);
    }
    int netbalance(){
        return (balance + balance * interest/100);
    }
};

int main(){
    int balance , ineterest;
    cout<<"enter the main balance:"<<endl;
    cin>>balance;
    cout<<"enter the interest rate:"<<endl;
    cin>>ineterest;
    money m;
    m.setdata(balance , ineterest);
    m.showdata();
    m.profit();
    m.netbalance();
    cout<<"Profit of this month"<<m.profit()<<endl;
    cout<<"Net Balance of this month"<<m.netbalance()<<endl;
    return 0;
}