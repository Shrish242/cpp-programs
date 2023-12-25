#include <iostream>
#include <cstdlib>
#include <ctime> // Add this header for better randomization
using namespace std;

class variable {
private:
    bool rock, paper, scissors;
    int value;

public:
    void setdata() {
        rock = false;
        paper = false;
        scissors = false;
        value = 0;
    }

    variable() {
        setdata();
    }

    void showdata() {
        cout << "1. Rock " << endl;
        cout << "2. Paper " << endl;
        cout << "3. Scissors " << endl;
    }

    void getdata() {
        cout << "Enter the value : ";
        cin >> value;
        int random = rand() % 3 + 1;
        if (value == 1) {
            rock = true;
            if (random == 1) {
                cout << "Draw " << endl;
                cout << "It was rock " << endl;
            } else if (random == 2) {
                cout << "You lose " << endl;
                cout << "It was paper " << endl;
            } else {
                cout << "You win " << endl;
                cout << "It was scissors " << endl;
            }
        } else if (value == 2) {
            paper = true;
            if (random == 1) {
                cout << "You win " << endl;
                cout << "It was rock " << endl;
            } else if (random == 2) {
                cout << "Draw " << endl;
                cout << "It was paper " << endl;
            } else if (random == 3) {
                cout << "You lose " << endl;
                cout << "It was scissors " << endl;
            } else {
                cout << "Invalid input " << endl;
            }
        } else if (value == 3) {
            scissors = true;
            if (random == 1) {
                cout << "You lose " << endl;
                cout << "It was rock " << endl;
            } else if (random == 2) {
                cout << "You win " << endl;
                cout << "It was paper " << endl;
            } else if (random == 3) {
                cout << "Draw " << endl;
                cout << "It was scissors " << endl;
            } else {
                cout << "Invalid input " << endl;
            }
        } else {
            cout << "Invalid input " << endl;
        }
    }
};

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed the random number generator with the current time

    char playAgain;
    
    do {
        variable v1;
        v1.showdata();
        v1.getdata();
        
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
