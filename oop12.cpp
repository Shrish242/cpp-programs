#include <iostream>
using namespace std;

class bank {
private:
    int principal;
    int time;
    float rate; // Use float for rate

public:
bank(){}

    bank(int p, int t, float r) {
        principal = p;
        time = t;
        rate = r;
        int returnvalue = principal;
        for (int i = 0; i < t; i++) {
            returnvalue = returnvalue * (1 + r);
        }
        principal = returnvalue;
    }

    bank(int p, int t, int R) {
        principal = p;
        time = t;
        rate = float(R) / 100;
        int returnvalue = principal;
        for (int i = 0; i < t; i++) {
            returnvalue = returnvalue * (1 + rate);
        }
        principal = returnvalue;
    }

    void display() {
        cout << "The net principal after " << time << " years is " << principal << " with the interest rate of " << rate << endl;
    }
};

int main() {
    int p, t, R;
    float r;
    cout << "Enter the principal, time, rate:" << endl;
    cin >> p >> t >> r;
    bank b1(p, t, r);
    b1.display();

    cout << "Enter the principal, time, rate (as percentage):" << endl;
    cin >> p >> t >> R;
    bank b2(p, t, R);
    b2.display();

    return 0;
}
