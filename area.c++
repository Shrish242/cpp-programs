#include <iostream>
#include <conio.h>

class Rectangle 
{
private:
    float len, br;

public:
    void getdata(float l, float b)
    {
        len = l;
        br = b;
    }

    void Area()
    {
        std::cout << "Area = " << len * br << std::endl;
    }

    void perimeter()
    {
        std::cout << "Perimeter = " << 2 * (len + br) << std::endl;
    }
};

int main()
{
    Rectangle r1;
    r1.getdata(6, 4);
    r1.Area();
    r1.perimeter();

    getch();
    return 0;
}
