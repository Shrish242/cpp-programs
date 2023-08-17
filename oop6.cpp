#include <iostream>
using namespace std;

class time
{
    int hour, minute, second;

public:
    time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    void getdata()
    {
        cout << "enter hour minute and second" << endl;
        cin >> hour >> minute >> second;
    }
    void display()
    {
        cout << "hour:" << hour << "minute:" << minute << "second:" << second << endl;
    }
    time add_time(time);
};

time time::add_time(time t2)
{
    time temp;
    temp.second = second + t2.second;
    while (temp.second >= 60)
    {
        temp.second -= 60;
        t2.second += 1;
    }
    temp.minute = minute + t2.minute;
    while (temp.minute >= 60)
    {
        temp.minute -= 60;
        t2.hour += 1;
    }
    temp.hour = hour + t2.hour;
    return temp;
}
int main()
{
    time t1, t2, t3;
    cout << "First time:" << endl;
    t1.getdata();
    cout << "First time:" << endl;
    t2.getdata();
    t3 = t1.add_time(t2);
    cout << "Total = ";
    t3.display();
    return 0;
}