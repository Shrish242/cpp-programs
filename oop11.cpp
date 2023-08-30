#include <iostream>
#include <cmath>
using namespace std;

class point;

class distance
{
private:
    float value;

public:
    distance(float v) : value(v) {}

    friend float dist(const point &p1, const point &p2); // Declare the friend function
};

class point
{
private:
    int x;
    int y;

public:
    point(int a, int b) : x(a), y(b) {}

    void display()
    {
        cout << "The (x, y) coordinate is: (" << x << " , " << y << ")\n";
    }

    friend float dist(const point &p1, const point &p2); // Declare the friend function
};

// Define the friend function to calculate the distance
float dist(const point &p1, const point &p2)
{
    int dx = p1.x - p2.x;
    int dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    point p1(1, 4);
    p1.display();

    point p2(6, 7);
    p2.display();

    float distance = dist(p1, p2); // Calculate the distance using the friend function
    cout << "Distance between p1 and p2: " << distance << endl;

    return 0;
}
