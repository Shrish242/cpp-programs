#include <iostream>
#include<string>
using namespace std;

class shop {
    int itemprice[100];
    int counter;
    string itemname[100];

public:
    shop() {
        counter = 0; //Initialize counter in the constructor
    }

    void setdata() {
        cout << "enter the name of item " << counter + 1 << endl;
        cin >> itemname[counter];
        cout << "enter the price of " << itemname[counter] << endl;
        cin >> itemprice[counter];
        counter++; // Increment counter after taking input for each item
    }

    void display() {
        for (int i = 0; i < counter; i++) {
            cout << "The price of " << itemname[i] << " is: " << itemprice[i] << endl;
        }
    }
};

int main() {
    shop du;
    int no;
    cout << "Enter the number of products:" << endl;
    cin >> no;
    for (int i = 0; i < no; i++) {
        du.setdata();
    }
    du.display();
    return 0;
}
