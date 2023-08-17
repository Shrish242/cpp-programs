#include <iostream>
using namespace std;

class friend1 {
private:
	int a;
	int b;
public:
	void getdata(int x , int y) {
		a = x;
		b = y;
	}
	friend friend1 newfriend(friend1 s1, friend1 s2);

	void display() {
		cout << "the data is" << a << " and " << b << endl;
	}
};

friend1 newfriend( friend1 s1 , friend1 s2) {
	friend1 s3;
	s3.a = (s1.a + s2.a);
	s3.b = (s1.b + s2.b);
	return s3;
}

int main()
{
	friend1 f1 , f2 ,f3;
    f1.getdata(2, 4);
	f2.getdata(8, 9);

	f3 = newfriend(f1, f2);
	f3.display();

	return 0;
}

//properties of friend function
//1. Not in the scope of class
//2.Can do anything with private members
//3. It cannot be called from class it will be invalid
//4. Can be invoke withhout the object
//5. Takes object as arguments usually
//6. Can be declarec inside private and public classes
